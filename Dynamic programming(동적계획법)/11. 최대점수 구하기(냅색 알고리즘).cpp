//최대점수 구하기(냅색 알고리즘)
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,M,i,j,s,t;
	//input
	scanf("%d %d",&N,&M);
	vector<int> dy(M+1);
	//dp
	for(i=0; i<N; i++){
		scanf("%d %d",&s,&t);
		for(j=M; j>=t; j--){
			dy[j]=max(dy[j],dy[j-t]+s);
		}
	}
	//output
	printf("%d\n",dy[M]);
	return 0;
} 
