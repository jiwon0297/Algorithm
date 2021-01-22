//인접행렬(가중치 방향그래프)
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	//input 
	int N, M, i, j; 
	scanf("%d %d",&N,&M);
	vector<vector<int> > info(M+1, vector<int>(4,0));
	vector<vector<int> > matrix(N+1, vector<int>(N+1,0));	
	for(i=1; i<=M; i++){
		for(j=1; j<=3; j++){
			scanf("%d", &info[i][j]);
		}
	}
	
	//인접행렬 만들기 
	for(i=1; i<=M; i++){
		matrix[info[i][1]][info[i][2]]=info[i][3];
	}
	
	//output
	for(int i=1; i<=N; i++){
			for(int j=1; j<=N; j++){
				printf("%d ", matrix[i][j]);
			}
			printf("\n");
	}
	
	return 0;
} 
