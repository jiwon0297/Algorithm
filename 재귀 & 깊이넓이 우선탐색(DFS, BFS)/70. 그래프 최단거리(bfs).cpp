//�׷��� �ִܰŸ� (BFS)
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int chk[30], dis[30];

int main(){
	//input 
	int N, M, i,dep,arr,x;
	scanf("%d %d",&N,&M);
	vector<int> graph[M+1];
	queue<int> Q;
	for(i=1; i<=M; i++){
		scanf("%d %d", &dep, &arr);
		graph[dep].push_back(arr);
	}
	
	//queue�� ù��° �� 
	Q.push(1);
	chk[1]=1;
	
	//�ݺ��� 
	while(!Q.empty()){
		x=Q.front();
		Q.pop();
		for(i=0; i<graph[x].size(); i++){
			if(chk[graph[x][i]]==0){ //chk Ȯ���ϰ� 
				chk[graph[x][i]]=1; //chk ���ְ� 
				Q.push(graph[x][i]); //queue�� �ְ� 
				dis[graph[x][i]]=dis[x]+1; //distance �� ���� 
			}
		}
	}
	
	//output
	for(i=2; i<=N; i++){
		printf("%d : %d\n",i,dis[i]);
	}
	
	return 0;
} 
