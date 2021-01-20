//부분집합 (DFS 완전탐색) 점수 100
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int N, ch[11];

void subset(int x){
	if(x==N+1){ //break point
		for(int i=1; i<=N; i++){
			if(ch[i]==1) printf("%d ",i); //출력 
		}
		printf("\n");
	} else {
		ch[x]=1; //왼쪽자식노드 
		subset(x+1);
		ch[x]=0; //오른쪽 자식노드 
		subset(x+1);
	}
}

int main(){
	scanf("%d", &N);
	subset(1); //함수 호출 
	
	return 0;
} 
