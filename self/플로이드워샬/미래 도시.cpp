#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,M,X,K,a,b;
	cin>>N>>M;
	vector<vector<int> > dist(N+1,vector<int>(N+1, 5000));
    
	for(int i=1; i<=N; i++) dist[i][i]=0;
	
	for(int i=1; i<=M; i++){
		cin>>a>>b;
		dist[a][b]=1;
		dist[b][a]=1;
	}
	
	cin>>X>>K;
	
	for(int k=1; k<=N; k++){
		for(int i=1; i<=N; i++){
			for(int j=1; j<=N; j++){
				dist[i][j]=min(dist[i][j], dist[i][k]+dist[k][j]);
			}
		}
	}
	
	int res=dist[1][K]+dist[K][X];
	
	if(res>1e9) cout<<"-1"<<endl;
	else cout<<res<<endl;
	
}

