#include<iostream>
using namespace std;

int N,M,res[9];

void dfs(int x, int next){
    if(x==M){
        for(int i=0; i<M; i++){
            cout<<res[i]<<" ";
        }
        cout<<'\n';
        return;
    }
    for(int i=next; i<=N; i++){
        res[x]=i;
        dfs(x+1, i+1);
    }
}

int main(){
    cin>>N>>M;
    dfs(0,1);
}
