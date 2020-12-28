// 모두의 약수 점수 100 

#include <stdio.h>
int cnt[50001]; 

int main(){
	int N, i, j;
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){ 
		for(j=i; j<=N; j=j+i){ //i의 배수들을 돌면서 배열에 추가하기 
			cnt[j]++; //약수 증가 
		}
	} 
	
	for(i=1; i<=N; i++){
		printf("%d ", cnt[i]); //출력 
	}
	
	return 0;
}

