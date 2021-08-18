#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int dp[1001]={0,1,2,};
    
    for(int i=3; i<=n; i++){ //시간초과 날까봐 1000까지 안하고 n까지 함
        dp[i]=(dp[i-1]+dp[i-2])%10007;
    }

    cout<<dp[n]<<endl;
}
