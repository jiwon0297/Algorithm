// 모두의 약수 점수 60 2개 시간초과 (시간복잡도 O(n^2)) 

#include <stdio.h>
using namespace std;

int main(){
	int N, i, j, cnt;
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
		cnt=0; //초기화하기 (다음 숫자로 넘어갈땐 0부터 시작해야하니까) 
		for(j=1; j<=i; j++){
			if(i%j==0) cnt++; //약수 세기 
		}
		printf("%d ", cnt); //출력 
	} 
	
	return 0;
}

