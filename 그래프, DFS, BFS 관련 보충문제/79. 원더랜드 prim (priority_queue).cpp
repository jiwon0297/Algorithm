//�������� prim MST �˰��� (priority_queue Ȱ��) 
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue> 
using namespace std;

int ch[30];
struct Edge{
	int B;
	int C;
	
	//������ 
	Edge(int b, int c){
		B=b;
		C=c;
	}
	
	bool operator<(const Edge &b)const{
		return C>b.C; //����ü ���� val �� �������� (�ּ���)
		//C<b.C �� �ִ��� 
	}
};

int main(){
	int V,E,A,B,C,i,exp=0;
	priority_queue<Edge> pQ;
	vector<pair<int, int> > list[30]; //��������Ʈ 
	//input
	scanf("%d %d",&V,&E); 
	
	for(int i=1; i<=E; i++){
		scanf("%d %d %d",&A,&B,&C);
		//����ġ ��������Ʈ (������) 
		list[A].push_back(make_pair(B,C));
		list[B].push_back(make_pair(A,C));
	}
	
	//�ּ��� ���� 
	pQ.push(Edge(1,0));
	while(!pQ.empty()){
		Edge tmp=pQ.top();
		pQ.pop();
		int v=tmp.B;
		int cost=tmp.C;
		if(ch[v]==0){ //v��� ������ Ʈ���� �������� �ƴ��� check 
			exp+=cost; //cost ���ϰ� 
			ch[v]=1; //chk ���� 
			for(i=0; i<list[v].size();i++){
				pQ.push(Edge(list[v][i].first, list[v][i].second));
				//������ȣ, ����ġ push 
			}
		}
	}
	
	//output
	printf("%d\n",exp);
	
	return 0;
} 
