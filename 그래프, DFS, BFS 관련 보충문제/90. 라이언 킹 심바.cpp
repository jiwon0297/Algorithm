//���̾� ŷ �ɹ� 
#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int map[30][30], ch[30][30];
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};

struct loc{ //�ɹٰ� �����̴� ��Ȳ ���� 
	int x,y,dis; //������ ��ǥ, �Ÿ� 
	loc(int a, int b, int c){
		x=a;
		y=b;
		dis=c;
	}
	//�켱���� ť 
	bool operator<(const loc &bb)const{
		if(dis==bb.dis){ //�Ÿ��� ������ 
			if(x==bb.x) return y>bb.y; //x��ǥ �켱, ������ y��ǥ 
			else return x>bb.x;
		}
		else return dis>bb.dis; //�Ÿ��� ª���� top���� ������ 
	}
};

struct Lion{ //�ɹ��� ���� 
	int x,y,s,ate; //�����ǥ, size, ���� Ƚ�� 
	void sizeUp(){
		ate=0;
		s++;
	}
};

int main(){
	int N,i,j,res=0;
	priority_queue<loc> Q;
	Lion simba;
	
	//input 
	scanf("%d",&N);
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			scanf("%d", &map[i][j]);
			if(map[i][j]==9) {
				simba.x=i;
				simba.y=j;
				map[i][j]=0;
			}
		}
	}
	Q.push(loc(simba.x,simba.y,0));
	simba.s=2;
	simba.ate=0;
	
	while(!Q.empty()){
		loc tmp=Q.top();
		Q.pop();
		
		int x=tmp.x;
		int y=tmp.y;
		int z=tmp.dis;
		
		//��� ���� �� �ִ��� 
		if(map[x][y]!=0 && map[x][y]<simba.s){
			simba.x=x;
			simba.y=y;
			simba.ate++;
			if(simba.ate>=simba.s) simba.sizeUp(); //size up
			map[x][y]=0;
			//check �迭 
			for(i=1; i<=N; i++){
				for(j=1; j<=N; j++){
					ch[i][j]=0;
				}
			}
			while(!Q.empty()) Q.pop();
			res=tmp.dis; 
		}
		//�����¿� Ž�� �� �̵� 
		for(i=0; i<4; i++){
			int xx=tmp.x+dx[i];
			int yy=tmp.y+dy[i];
			if(xx<1||xx>N||yy<1||yy>N||map[xx][yy]>simba.s||ch[xx][yy]>0) continue;
			Q.push(loc(xx,yy,z+1));
			ch[xx][yy]=1; //check
		}
	}
	
	printf("%d\n",res);
	return 0; 
}
