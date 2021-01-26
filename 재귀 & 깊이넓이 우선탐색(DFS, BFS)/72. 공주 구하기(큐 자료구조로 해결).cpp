//공주구하기 점수 100
#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

int main(){
	//input
	int N,K,i,cnt=0;
	scanf("%d %d",&N,&K);
	queue<int> Q;
	//push
	for(i=1; i<=N; i++){
		Q.push(i);
	}
	//반복문 
	while(!Q.empty()){
		for(i=1; i<K; i++){ //k를 외치기 전엔 다시 뒤로 넣어줌 
			Q.push(Q.front());
			Q.pop();
		}
		Q.pop(); //i==k 일때 없앰 
		if(Q.size()==1){ //1개 남았을때 output 
			printf("%d\n",Q.front());
			Q.pop();
		}
	}
}
