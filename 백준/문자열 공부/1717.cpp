#include<stdio.h>
#include<vector>
using namespace std;

vector<int> parent;

//�ֻ��� �θ� ã�� �޼ҵ� 
int find(int v){
	if(v==parent[v]) return v;
	else {
		int w=find(parent[v]);
		parent[v]=w;
		return w;
	}
}

//�� ��带 �ϳ��� �������� ��ġ�� �޼ҵ� 
void uni(int v1, int v2){
	v1=find(v1);
	v2=find(v2);
	
	if(v1==v2) return;
	parent[v2]=v1;
}

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	
	for(int i=0; i<=n; i++) parent.push_back(i);
	
	for(int i=0; i<m; i++){
		int v,a,b;
		scanf("%d %d %d",&v,&a,&b);
		if(v==0){
			uni(a,b);
		} else{
			if(find(a)==find(b)) printf("YES\n");
			else printf("NO\n");
		}
	}
	
	return 0;
}
