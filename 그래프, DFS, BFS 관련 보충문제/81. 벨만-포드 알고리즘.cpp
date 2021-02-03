//벨만-포드 알고리즘
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int dist[101];

//구조체 
struct Edge{
	int dep;
	int arr;
	int exp;
	Edge(int a, int b, int c){
		dep=a;
		arr=b;
		exp=c;
	}
};

int main(){
	vector<Edge> ed;
	int i,N,M,A,B,C,j,dep,arr;
	
	scanf("%d %d",&N,&M);
	for(i=1; i<=M; i++){
		scanf("%d %d %d",&A,&B,&C);
		ed.push_back(Edge(A,B,C));
	}
	
	for(i=1; i<=N; i++){
		dist[i]=2147000000; //무한대로 초기화 
	}
	scanf("%d %d",&dep, &arr);
	dist[dep]=0;
	for(i=1; i<N; i++){ //i는 가능한 간선의 개수 
		for(j=0; j<ed.size(); j++){
			int u=ed[j].dep;
			int v=ed[j].arr;
			int w=ed[j].exp;
			//출발이 무한대가 아니고 출발값에 가중치 더한 값이 기존값보다 작다면 
			if(dist[u]!=2147000000 && dist[u]+w<dist[v]){
				dist[v]=dist[u]+w; //값 갱신 
			}
		}
	}
	
	//간선이 n개일때 : 음의 사이클 
	for(j=0; j<ed.size(); j++){
		int u=ed[j].dep;
		int v=ed[j].arr;
		int w=ed[j].exp;
		
		if(dist[u]!=2147000000 && dist[u]+w<dist[v]){
			printf("-1\n");
			exit(0); //값이 있으면 -1출력하고 프로그램 종료 
		}
	}
	
	printf("%d\n",dist[arr]);
	return 0; 
} 
