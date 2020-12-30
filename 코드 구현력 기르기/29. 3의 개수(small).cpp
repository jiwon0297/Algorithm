// 3의 개수는?(small) 점수 100

#include<stdio.h>

int main(){
	int N, i, num=0, temp, digit;
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		temp=i;
		while(temp>0){ // 몫이 있을때까지만 나누기 (자리수 개수 구하기 위한) 
			digit=temp%10;
			if(digit==3) num++; //나눠서 3이면 num 증가 
			temp=temp/10;
		}
	}
	printf("%d\n",num);
	return 0;
} 
