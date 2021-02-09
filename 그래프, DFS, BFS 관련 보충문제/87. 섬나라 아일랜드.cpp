//섬나라 아일랜드
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

//탐색을 위해 
int dx[8]={0,1,1,1,0,-1,-1,-1};
int dy[8]={-1,-1,0,1,1,1,0,-1};

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
	int N, matrix[21][21],i,j,cnt=0;
	
	//input 
	scanf("%d",&N);
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			if(matrix[i][j]==1){ //1이면 
				Q.push(loc(i,j)); //Q에 좌표를 push 
				matrix[i][j]=0; //해당 값 0으로 변경 
				
				//주변탐색 
				while(!Q.empty()){
					loc tmp = Q.front();
					Q.pop();
					
					// 주변 8칸을 검색하여 1이면 해당좌표 push 후 0으로 바꿈 
					for(int i=0; i<8; i++){
						if(matrix[tmp.x+dx[i]][tmp.y+dy[i]]==1){
							Q.push(loc(tmp.x+dx[i],tmp.y+dy[i]));
							matrix[tmp.x+dx[i]][tmp.y+dy[i]]=0;
						}
					}
				}
				//주변에 더 이상 1이 없으면 cnt 추가 
				cnt++;
			}
		}
	}
	
	//output
	printf("%d\n",cnt);
	return 0;
} 
