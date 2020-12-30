// 온도의 최대값 60점 나머지 시간초과 

#include <stdio.h>

int main(){
	int N, K, tem[100001], i, j, sum, max=-2147000000;
	scanf("%d %d",&N, &K);
	
	for(i=0; i<N; i++){
		scanf("%d",&tem[i]); //입력 
	} 
	
	for(i=0; i<=N-K; i++){ //이중 for문 
		sum=0;
		for(j=i; j<i+K; j++){
			sum+=tem[j];
		}
		if(sum>max) max=sum;
	}
	
	printf("%d\n", max);
	return 0;
}
