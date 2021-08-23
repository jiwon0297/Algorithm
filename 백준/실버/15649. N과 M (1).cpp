#include<iostream>
using namespace std;

int N,M,chk[9];
int res[9]={0,};

void dfs(int x){
    if(x==M){
        for(int i=0; i<M; i++) cout<<res[i]<<' ';
        cout<<'\n';
        return;
    }
    for(int i=1; i<=N; i++){
        if(chk[i]==0){
            chk[i]=1;
            res[x]=i;
            dfs(x+1);
            chk[i]=0;
        }
    }
}

int main(){
    cin>>N>>M;
    dfs(0);
}
