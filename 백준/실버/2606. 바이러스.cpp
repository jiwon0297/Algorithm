#include<iostream>
#include<vector>
using namespace std;
vector<int> graph[101];
int chk[30],cnt=0,n;

void dfs(int x){
    if(x==n){
        cnt++;
    } else{
        for(int i=0; i<graph[x].size(); i++){
            if(chk[graph[x][i]]==0){
                chk[graph[x][i]]=1;
                dfs(graph[x][i]);
                chk[graph[x][i]]=0;
            }
        }
    }
}

int main(){
    int m;
    cin>>n>>m;
    
    for(int i=1; i<=m; i++){
        int a, b;
        cin>>a>>b;
        graph[a].push_back(b);
    }
    
    chk[1]=1;
    dfs(1);
    
    cout<<cnt<<endl;
}
