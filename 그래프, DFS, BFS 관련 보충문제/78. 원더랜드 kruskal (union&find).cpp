//�������� kruskal MST �˰��� (union&find Ȱ��) 
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int unf[10001];

struct Edge{
	int A;
	int B;
	int C;
	
	//������ 
	Edge(int a, int b, int c){
		A=a;
		B=b;
		C=c;
	}
	
	bool operator<(Edge &b){
		return C<b.C; //����ü ���� val �� �������� 
	}
};

int Find(int x){ //find
	if(x==unf[x]) return x;
	else return unf[x]=Find(unf[x]); //��Ʈ��忡 �������� �ϳ��� ���� 
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
	sort(ed.begin(),ed.end()); //C �� �������� ���� 
	
	for(i=0; i<E; i++){
		int fa=Find(ed[i].A);
		int fb=Find(ed[i].B);
		if(fa!=fb){ //������� ���� �͸� ����(������ �ٸ��͸�) 
			exp+=ed[i].C; //����Ǹ� res�� �� ���� 
			Union(ed[i].A,ed[i].B);
		}
	}
	
	//output
	printf("%d\n",exp);
	
	return 0;
} 
