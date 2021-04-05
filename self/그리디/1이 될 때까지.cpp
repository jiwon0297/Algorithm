#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,K,cnt=0;
	scanf("%d %d", &N,&K);
	
	while(N!=1){
		cnt++;
		if(N%K==0) N=N/K;
		else N-=1;
	}
	
	printf("%d",cnt);
	return 0;
	
}
