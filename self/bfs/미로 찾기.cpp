#include<iostream>
#include<queue>
using namespace std;

int map[201][201];
int dx[]={-1,0,1,0}, dy[]={0,1,0,-1};

int main(){
	int N,M;
	queue<pair<int, int> > Q;
	cin >> N >> M;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			cin >> map[i][j];
		}
	}
	
	Q.push({1,1});
	while(!Q.empty()){
		int x=Q.front().first;
		int y=Q.front().second;
		Q.pop();
		
		for(int i=1; i<=4; i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			
			if(nx<0||nx>N||ny<0||ny>M) continue;
			if(map[nx][ny]==0) continue;
			if(map[nx][ny]==1){
				map[nx][ny]=map[x][y]+1;
				Q.push({nx,ny});
			}
		}
	}
	
	cout<<map[N][M]<<endl;
} 
