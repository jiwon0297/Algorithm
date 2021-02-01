//원더랜드 kruskal MST 알고리즘 (union&find 활용) 
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int unf[10001];

struct Edge{
	int A;
	int B;
	int C;
	
	//생성자 
	Edge(int a, int b, int c){
		A=a;
		B=b;
		C=c;
	}
	
	bool operator<(Edge &b){
		return C<b.C; //구조체 정렬 val 값 오름차순 
	}
};

int Find(int x){ //find
	if(x==unf[x]) return x;
	else return unf[x]=Find(unf[x]); //루트노드에 나머지가 하나로 연결 
}

void Union(int a, int b){ //union
	a=Find(a);
	b=Find(b);
	if(a!=b) unf[a]=b;
}

int main(){
	int V,E,A,B,C,i,exp=0;
	vector<Edge> ed;
	//input
	scanf("%d %d",&V,&E); 
	for(int i=1; i<=V; i++){
		unf[i]=i;
	}
	for(int i=1; i<=E; i++){
		scanf("%d %d %d",&A,&B,&C);
		ed.push_back(Edge(A,B,C));
	}
	sort(ed.begin(),ed.end()); //C 값 오름차순 정렬 
	
	for(i=0; i<E; i++){
		int fa=Find(ed[i].A);
		int fb=Find(ed[i].B);
		if(fa!=fb){ //연결되지 않은 것만 연결(집합이 다른것만) 
			exp+=ed[i].C; //연결되면 res에 값 증가 
			Union(ed[i].A,ed[i].B);
		}
	}
	
	//output
	printf("%d\n",exp);
	
	return 0;
} 
