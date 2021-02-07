//휴가 
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int N,maxx=-2147000000,T[16],P[16];

void dfs(int L, int sum){
	if(L==N+1){
		if(sum>maxx) maxx=sum; //최대값 
	} else{
		if(L+T[L]<=N+1) dfs(L+T[L],sum+P[L]); //선택하면 상담 후 날짜, 비용 
		dfs(L+1,sum); //선택 안되면 다음 날짜, 비용 
	}
}

int main(){
	//input
	scanf("%d",&N);
	for(int i=1; i<=N; i++){
		scanf("%d %d",&T[i],&P[i]);
	}
	dfs(1,0); //함수 호출 
	printf("%d\n",maxx); //output
	
	return 0;
} 
