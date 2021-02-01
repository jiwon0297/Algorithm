//친구인가? (union&find 자료구조) 
#include<stdio.h>
using namespace std;

int unf[1001];

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
	
	//a,b의 집합을 찾고 
	fa=Find(a);
	fb=Find(b);
	
	//output
	if(fa==fb) printf("YES\n");
	else printf("NO\n");
	
	return 0;
} 
