//�丶��(bfs)
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int map[1010][1010], maxx=-2147000000, dis[1010][1010];
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};

struct loc{
	int x;
	int y;
	loc(int a, int b){
		x=a;
		y=b;
	}
};

queue<loc> Q;

int main(){
	int N,M,i,j;
	//input 
	scanf("%d %d",&M,&N);
	for(i=1; i<=N; i++){
		for(j=1; j<=M; j++){
			scanf("%d",&map[i][j]);
			if(map[i][j]==1) Q.push(loc(i,j));
		}
	}
	
	//bfs
	while(!Q.empty()){
		loc tmp=Q.front();
		Q.pop();
		//��ǥŽ��(�����¿�) 
		for(i=0; i<4; i++){
			if(map[tmp.x+dx[i]][tmp.y+dy[i]]==0
			&&tmp.x+dx[i]>=1 && tmp.x+dx[i]<=N
			&&tmp.y+dy[i]>=1 && tmp.y+dy[i]<=M){
				Q.push(loc(tmp.x+dx[i],tmp.y+dy[i])); //q�� push 
				map[tmp.x+dx[i]][tmp.y+dy[i]]=1; //���� 1�� ���� 
				dis[tmp.x+dx[i]][tmp.y+dy[i]]=dis[tmp.x][tmp.y]+1;
				//dis �迭�� ��¥ �߰� 
			}
		}
	}
	
	int f=1;
	for(i=1; i<=N; i++){
		for(j=1; j<=M; j++){
			if(map[i][j]==0) f=0; //��� ���� �� ���ٸ� f=0 
		}
	}
	
	if(f==1){
		for(i=1; i<=N; i++){
			for(j=1; j<=M; j++){
				if(dis[i][j]>maxx) maxx=dis[i][j];
			}
		}  //��� ���� ��� dis �� output
		//(ó������ �;��ٸ� Q�� ���� �ʰ� �����Ƿ� �ڵ����� 0 ���) 
		printf("%d\n",maxx);
	} else printf("-1"); //��� ���� �� ���� ��� 
	
	
}
