// 가장 많이 사용된 자릿수 점수 100 

#include <stdio.h>
int num[10];

int main(){
	int i, max=-2147000000, res;
	char N[101];
	
	scanf("%s",&N);
	
	for(i=0; N[i]!='\0'; i++){
		num[N[i]-48]++; //0-9 인 배열 박스에 해당 값이 나오면 1씩 증가시킴 
	}
	
	for(i=0; i<=9; i++){
		if(num[i]>=max){ //=를 붙이면서 개수가 동일할 때 큰 수 출력하게 함 
			max=num[i];
			res=i;
		}
	}
	printf("%d\n", res); //max일때의 i 출력 
	
	return 0;
}
