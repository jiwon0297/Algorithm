// 돌다리 건너기(bottom-up)
#include<stdio.h>

int main(){
	int N, dy[45],i;
	scanf("%d",&N);
	dy[1]=1;
	dy[2]=2;
	
	for(i=3; i<=N; i++){
		dy[i]=dy[i-2]+dy[i-1];
	}
	
	printf("%d\n",dy[N]);
} 
