//����-���� �˰���
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int dist[101];

//����ü 
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
		dist[i]=2147000000; //���Ѵ�� �ʱ�ȭ 
	}
	scanf("%d %d",&dep, &arr);
	dist[dep]=0;
	for(i=1; i<N; i++){ //i�� ������ ������ ���� 
		for(j=0; j<ed.size(); j++){
			int u=ed[j].dep;
			int v=ed[j].arr;
			int w=ed[j].exp;
			//����� ���Ѵ밡 �ƴϰ� ��߰��� ����ġ ���� ���� ���������� �۴ٸ� 
			if(dist[u]!=2147000000 && dist[u]+w<dist[v]){
				dist[v]=dist[u]+w; //�� ���� 
			}
		}
	}
	
	//������ n���϶� : ���� ����Ŭ 
	for(j=0; j<ed.size(); j++){
		int u=ed[j].dep;
		int v=ed[j].arr;
		int w=ed[j].exp;
		
		if(dist[u]!=2147000000 && dist[u]+w<dist[v]){
			printf("-1\n");
			exit(0); //���� ������ -1����ϰ� ���α׷� ���� 
		}
	}
	
	printf("%d\n",dist[arr]);
	return 0; 
} 
