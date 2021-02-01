//ģ���ΰ�? (union&find �ڷᱸ��) 
#include<stdio.h>
using namespace std;

int unf[1001];

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
	int N,M,a,b,fa,fb;
	//input
	scanf("%d %d",&N,&M);
	for(int i=1; i<=N; i++){
		unf[i]=i;
	}
	for(int i=1; i<=M; i++){
		scanf("%d %d",&a,&b);
		Union(a,b);
	}
	scanf("%d %d",&a,&b);
	
	//a,b�� ������ ã�� 
	fa=Find(a);
	fb=Find(b);
	
	//output
	if(fa==fb) printf("YES\n");
	else printf("NO\n");
	
	return 0;
} 
