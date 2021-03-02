//알리바바와 40인의 도둑(Top-Down) 
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int arr[21][21],dy[21][21];

int dfs(int a, int b){
	if(dy[a][b]>0) return dy[a][b]; //메모이제이션. 값이 있으면 그대로 출력
	if(a==1 && b==1){
		return arr[1][1];
	} else{
		if(b==1) return dy[a][b]=dfs(a-1,b)+arr[a][b]; //y좌표가 0일때 값을 저장해서 보냄
		else if(a==1) return dy[a][b]=dfs(a,b-1)+arr[a][b]; //x좌표가 0일때 값을 저장해서 보냄
		else return dy[a][b]=min(dfs(a-1,b),dfs(a,b-1))+arr[a][b]; //메모이제이션
	}
}

int main(){
	int N,i,j;
	//input
	scanf("%d",&N);
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	//output
	printf("%d\n",dfs(N,N));
	return 0;
}
