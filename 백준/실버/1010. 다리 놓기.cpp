#include <iostream>
using namespace std;

int main(){
    int N,M,dp[31][31],T;
    
    for(int i=0; i<31; i++){
        for(int j=0; j<31; j++){
            dp[i][j]=0;
        }
    } //초기화
    
    for(int i=0; i<31; i++){
        dp[1][i]=i;
    } //N=1 일땐 경우의수 무조건 M 
    
    for(int i=2; i<31; i++){
        for(int j=i; j<31; j++){ 
            for(int k=j-1; k>=i-1; k--){
                dp[i][j] += dp[i-1][k];
            }
        }
    } //dp[i][j]=dp[i-1][j-1]+dp[i-1][j-2]+...+dp[i-1][i-1]
    
    cin>>T;
    
    for(int i=0; i<T; i++){
        cin>>N>>M;
        cout<<dp[N][M]<<endl;
    }
}
