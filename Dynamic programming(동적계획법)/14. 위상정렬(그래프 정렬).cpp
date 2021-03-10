//위상정렬(그래프 정렬)
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int main(){
	int N,M,a,b,i;
	//input
	scanf("%d %d",&N,&M);
	vector<vector<int> > graph(N+1,vector<int>(N+1,0));
	vector<int> degree(N+1);
	queue<int> Q;
	for(i=0; i<M; i++){
		scanf("%d %d",&a,&b);
		graph[a][b]=1;
		degree[b]++;
	}
	for(i=1; i<=N; i++){
		if(degree[i]==0) Q.push(i);
	}
	//큐 구현 
	while(!Q.empty()){
		int now=Q.front();
		Q.pop();
		printf("%d ",now); //처음 출력 
		for(i=1; i<=N; i++){
			if(graph[now][i]==1){
				degree[i]--; //출력되고 그 다음값 degree 감소 
				if(degree[i]==0) Q.push(i); //0이면 큐에 넣기 
			}
		}
	}
	return 0;
} 
