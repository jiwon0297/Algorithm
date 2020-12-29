// 소수의 개수 점수 100

#include <stdio.h>

bool isPrime(int x){ //소수인지 확인하는 함수  
	int i;
	bool flag = true; //기본값을 true 로 설정하고  
	for(i=2; i*i<=x; i++){
		if(x%i==0) { // 2부터 자기자신 전숫자까지 나눠지는 숫자 하나라도 있다면 
			flag=false; //false로 바꾸고 break 
			break;
		}
	}
	return flag;
}

int main(){
	int N, i, cnt=0;
	
	scanf("%d",&N);
	
	for(i=2; i<=N; i++){
		if(isPrime(i)) cnt++; //i 가 소수이면 cnt 증가 
	}
	
	printf("%d",cnt);
	
	return 0;
}
