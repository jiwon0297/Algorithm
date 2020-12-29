// 분노 유발자 점수 100 

#include <stdio.h>

int main(){
	int N, i, hei[101], max, cnt=0;
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
		scanf("%d", &hei[i]);
	}  
	
	max=hei[N]; //배열의 제일 마지막으로 max 초기화 
	for(i=N-1; i>=1; i--){
		if(hei[i]>max){ //가장 마지막부터 돌면서 max가 생기면 cnt 증가 
			max=hei[i];
			cnt++;
		}
	}
	
	printf("%d\n", cnt); //cnt 출력 
	
	return 0;
}
