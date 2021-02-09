//�̷��� �ִܰŸ� ��� 
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

//Ž���� ���� 
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};
int map[8][8], dis[8][8];

struct loc{ //��ǥ ����ü 
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
		//��ǥ �����¿� Ž��				
		for(i=0; i<4; i++){
			//���� 0�̰�, ��ǥ�� (7,7) �ȿ� ���� ��� 
			if(map[tmp.x+dx[i]][tmp.y+dy[i]]==0
			&& tmp.x+dx[i]>=1 && tmp.x+dx[i]<=7
			&& tmp.y+dy[i]>=1 && tmp.y+dy[i]<=7){
				Q.push(loc(tmp.x+dx[i],tmp.y+dy[i]));
				map[tmp.x+dx[i]][tmp.y+dy[i]]=1;
				//�Ÿ� �� ���ϱ� 
				dis[tmp.x+dx[i]][tmp.y+dy[i]] = dis[tmp.x][tmp.y]+1;
			}
		}
	}
	if(dis[7][7]==0) printf("-1");
	else printf("%d\n",dis[7][7]);
	
	return 0;
}
