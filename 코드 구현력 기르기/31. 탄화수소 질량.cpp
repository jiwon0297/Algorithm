// 탄화수소 질량 점수 100

#include<stdio.h>

int main(){
	char ch[10];
	int c=0, h=0, i, p, res=0;
	scanf("%s",&ch);
	
	if(ch[1]=='H'){ //C다음 바로 H오면 C의 개수 1 H의 위치 1 
		c=1;
		p=1;
	} else{
		for(i=1; ch[i]!='H'; i++) { //H가 나올때까지 
			c=c*10+ch[i]-48; //C의 개수 구하기 
		}
		p=i; //H의 위치 i 
	} 
	
	if(ch[p+1]=='\0') h=1; //p+1의 값이 null 일땐 H의 개수 1 
	else {
		for(i=p+1; ch[i]!='\0'; i++) { //p+1부터 끝까지 
			h=h*10+ch[i]-48; //H의 개수 구하기 
		}
	}
	
	res=c*12+h*1; //질량 구하기 
	printf("%d\n",res); //출력 
	
	return 0;
} 
