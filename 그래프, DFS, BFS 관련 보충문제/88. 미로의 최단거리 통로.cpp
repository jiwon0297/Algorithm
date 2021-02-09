//미로의 최단거리 통로 
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

//탐색을 위해 
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};
int map[8][8], dis[8][8];

struct loc{ //좌표 구조체 
	int x;
	int y;
	loc(int a, int b){
		x=a;
		y=b;
	}
};

queue<loc> Q;

int main(){
	int i,j;
	//input 
	for(i=1; i<=7; i++){
		for(j=1; j<=7; j++){
			scanf("%d", &map[i][j]);
		}
	}
	
	//bfs
	Q.push(loc(1,1));
	map[1][1]=1;
		
	while(!Q.empty()){
		loc tmp=Q.front();
		Q.pop();
		//좌표 상하좌우 탐색				
		for(i=0; i<4; i++){
			//값이 0이고, 좌표가 (7,7) 안에 있을 경우 
			if(map[tmp.x+dx[i]][tmp.y+dy[i]]==0
			&& tmp.x+dx[i]>=1 && tmp.x+dx[i]<=7
			&& tmp.y+dy[i]>=1 && tmp.y+dy[i]<=7){
				Q.push(loc(tmp.x+dx[i],tmp.y+dy[i]));
				map[tmp.x+dx[i]][tmp.y+dy[i]]=1;
				//거리 값 더하기 
				dis[tmp.x+dx[i]][tmp.y+dy[i]] = dis[tmp.x][tmp.y]+1;
			}
		}
	}
	if(dis[7][7]==0) printf("-1");
	else printf("%d\n",dis[7][7]);
	
	return 0;
}
