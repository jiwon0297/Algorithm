// 선생님 퀴즈 점수 100 

#include <stdio.h>

int main(){
	int N, i, j, num, sum, sumres;
	
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		scanf("%d %d",&num,&sum); //숫자랑 답 입력받고 
		sumres=0;
		for(j=1; j<=num; j++){
			sumres+=j;
		}
		if(sum==sumres) printf("YES\n"); //입력받은 답과 실제 답이 같다면 yes
		else printf("NO\n"); //아니면 no 
	
	}
	return 0;
}
