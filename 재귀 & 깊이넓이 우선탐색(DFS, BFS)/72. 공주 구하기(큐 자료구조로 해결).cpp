//���ֱ��ϱ� ���� 100
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
	//�ݺ��� 
	while(!Q.empty()){
		for(i=1; i<K; i++){ //k�� ��ġ�� ���� �ٽ� �ڷ� �־��� 
			Q.push(Q.front());
			Q.pop();
		}
		Q.pop(); //i==k �϶� ���� 
		if(Q.size()==1){ //1�� �������� output 
			printf("%d\n",Q.front());
			Q.pop();
		}
	}
}
