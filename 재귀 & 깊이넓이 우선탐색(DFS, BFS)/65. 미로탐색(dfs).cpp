// 미로탐색 (DFS) 점수 100 
#include<stdio.h>

int maze[10][10], chk[10][10], cnt=0;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

void escape(int i, int j){
	int ii, jj;
	if(i==7 && j==7){ //break point
		cnt++;
	} else{
		for(int k=0; k<4; k++){
			ii=i+dx[k]; //12시방향, 3시방향, 6시방향, 9시방향 순으로 탐색 
			jj=j+dy[k];

			if(ii<1 || ii>7 || jj<1 || jj>7) continue; //격자 밖 
			if(maze[ii][jj]==0 && chk[ii][jj]==0){ //통로이고, 중복 x 
				chk[ii][jj]=1; //갔다는 표시 
				escape(ii,jj); //재귀 
				chk[ii][jj]=0; //다시 풀어줌 
			}
		}
	}
}

int main(){
	int i,j;
	for(i=1; i<=7; i++){
		for(j=1; j<=7; j++){
			scanf("%d", &maze[i][j]); //input
		}
	}
	
	chk[1][1]=1; //제일 처음  
	escape(1,1); //함수호출 
	printf("%d\n",cnt); //output
	return 0;
} 
