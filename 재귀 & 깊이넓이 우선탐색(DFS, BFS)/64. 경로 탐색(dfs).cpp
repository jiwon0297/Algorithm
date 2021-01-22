//경로 탐색 점수 100 
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int matrix[21][21], chk[30], N, M, cnt=0;

void dfs(int x){
	if(x==N){
		cnt++; //도달하였으면 count ++ 
	} else {
		for(int i=1; i<=N; i++){
			if(matrix[x][i]==1 && chk[i]==0){ //갈 수 있고, 반복이 아니면 
				chk[i]=1; //check 배열 1로 바꾸고 
				dfs(i); //dfs 부르고 
				chk[i]=0; //check 다시 풀어주기 
			}
		}
	}
}

int main(){
	//input 
	int i, dep, arr;
	scanf("%d %d",&N,&M);
	for(i=1; i<=M; i++){
		scanf("%d %d", &dep, &arr);
		matrix[dep][arr]++; //인접행렬 만들기 
	} 
	
	chk[1]=1; //check 배열 
	dfs(1); //함수호출 
	
	printf("%d\n", cnt);
	return 0;
} 
