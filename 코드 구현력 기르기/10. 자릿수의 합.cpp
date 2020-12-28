// 자릿수의 합 점수 100 

#include <stdio.h>

int digit_sum(int x){
	int temp, sum=0;
	while(x>0){ //10으로 계속 나누면서 자릿수 더하기 
		temp=x%10;
		sum=sum+temp;
		x=x/10;
	}
	
	return sum;
} 

int main(){
	int N, num, i, sum, max=-2147000000, res;
	scanf("%d", &N);
	
	for(i=0; i<N; i++) {
		scanf("%d", &num);
		sum=digit_sum(num);
		
		if(sum>max){ //자릿수 최대값 구하고 해당 num 값을 result에 입력 
			max=sum;
			res=num;
		} else if(sum==max){ //구해진 sum이 기존 max와 같을 때 
			if(num>res) res=num; //기존 res와 해당 num 중에 큰 수가 result 
		}
	}
	
	printf("%d\n",res); //result 출력 
	
	return 0;
}

