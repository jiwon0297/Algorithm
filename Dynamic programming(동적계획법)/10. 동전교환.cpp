//동전교환
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,M,i,j;
	//input
	scanf("%d",&N);
	vector<int> coin(N);
	for(i=0; i<N; i++){
		scanf("%d",&coin[i]);
	}
	scanf("%d",&M);
	vector<int> dy(M+1,1000);
	
	//dp
	dy[0]=0;
	for(i=0; i<N; i++){
		for(j=coin[i]; j<=M; j++){
			dy[j]=min(dy[j],dy[j-coin[i]]+1);
		}
	}
	
	//output
	printf("%d\n",dy[M]);
	return 0;
}
