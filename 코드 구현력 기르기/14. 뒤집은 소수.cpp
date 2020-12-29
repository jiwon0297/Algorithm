// 뒤집은 소수 점수 100 

#include <stdio.h>

int reverse(int x){ //숫자 뒤집기 함수 
	int res=0, temp;
	while(x>0){ //각 자리수에 10곱해서 더하기 
		temp=x%10;
		res=res*10+temp;
		x=x/10;
	} 
	return res;
}

bool isPrime(int x){ //소수인지 확인하는 함수  
	int i;
	if(x==1) return false; //1일땐 false 
	bool flag = true; //기본값을 true 로 설정하고  
	for(i=2; i<x; i++){
		if(x%i==0) { // 2부터 자기자신 전숫자까지 나눠지는 숫자 하나라도 있다면 
			flag=false; //false로 바꾸고 break 
			break;
		}
	}
	return flag;
}

int main(){
	int N, num, i, temp;
	
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		scanf("%d",&num); //갯수대로 입력받기  
		temp = reverse(num); //뒤집어진 값 temp에 저장 
		if(isPrime(temp)) printf("%d ", temp); //temp 가 소수이면 출력 
	}
	
	return 0;
}
