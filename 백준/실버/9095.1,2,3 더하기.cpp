#include<iostream>
using namespace std;

int main(){
    int T,n;
    cin>>T;
    
    int dp[13]={0,1,2,4,};
    
    for(int i=4; i<12; i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    
    for(int i=0; i<T; i++){
        cin>>n;
        cout<<dp[n]<<'\n';
    }
    
    return 0;
}
