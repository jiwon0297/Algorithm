// 숫자의 총 개수(large) 점수 100 

#include <stdio.h>

int main(){
	int N, num=0, c=1, d=9, res=0;
	scanf("%d",&N);
	
	while(num+d<N){
		res=res+(c*d);
		num=num+d; //자릿수의 마지막숫자를 입력값과 비교하기 위함.
		c++; //자리수 증가 
		d=d*10; //다음자리수의 개수 
	}
	
	res=res+(N-num)*c; //꽉찬 자릿수를 제외하고 남은 숫자들 계산해줌 
	
	printf("%d\n",res);
	return 0;
}
