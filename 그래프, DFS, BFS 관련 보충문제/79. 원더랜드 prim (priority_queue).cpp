//원더랜드 prim MST 알고리즘 (priority_queue 활용) 
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue> 
using namespace std;

int ch[30];
struct Edge{
	int B;
	int C;
	
	//생성자 
	Edge(int b, int c){
		B=b;
		C=c;
	}
	
	bool operator<(const Edge &b)const{
		return C>b.C; //구조체 정렬 val 값 내림차순 (최소힙)
		//C<b.C 면 최대힙 
	}
};

int main(){
	int V,E,A,B,C,i,exp=0;
	priority_queue<Edge> pQ;
	vector<pair<int, int> > list[30]; //인접리스트 
	//input
	scanf("%d %d",&V,&E); 
	
	for(int i=1; i<=E; i++){
		scanf("%d %d %d",&A,&B,&C);
		//가중치 인접리스트 (무방향) 
		list[A].push_back(make_pair(B,C));
		list[B].push_back(make_pair(A,C));
	}
	
	//최소힙 구현 
	pQ.push(Edge(1,0));
	while(!pQ.empty()){
		Edge tmp=pQ.top();
		pQ.pop();
		int v=tmp.B;
		int cost=tmp.C;
		if(ch[v]==0){ //v라는 정점이 트리에 원소인지 아닌지 check 
			exp+=cost; //cost 더하고 
			ch[v]=1; //chk 해줌 
			for(i=0; i<list[v].size();i++){
				pQ.push(Edge(list[v][i].first, list[v][i].second));
				//정점번호, 가중치 push 
			}
		}
	}
	
	//output
	printf("%d\n",exp);
	
	return 0;
} 
