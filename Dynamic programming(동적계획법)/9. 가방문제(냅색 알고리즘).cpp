//가방문제(냅색 알고리즘) 
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int w,v,N,M,i,j;
	//input
	scanf("%d %d",&N,&M);
	vector<int> dy(M+1,0);
	//dp
	for(i=0; i<N; i++){
		scanf("%d %d",&w,&v);
		for(j=w; j<=M; j++){
			dy[j]=max(dy[j],dy[j-w]+v);
		}
	}
	
	//output
	printf("%d\n",dy[M]);
	return 0;
} 
