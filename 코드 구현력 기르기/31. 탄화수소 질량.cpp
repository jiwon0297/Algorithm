// źȭ���� ���� ���� 100

#include<stdio.h>

int main(){
	char ch[10];
	int c=0, h=0, i, p, res=0;
	scanf("%s",&ch);
	
	if(ch[1]=='H'){ //C���� �ٷ� H���� C�� ���� 1 H�� ��ġ 1 
		c=1;
		p=1;
	} else{
		for(i=1; ch[i]!='H'; i++) { //H�� ���ö����� 
			c=c*10+ch[i]-48; //C�� ���� ���ϱ� 
		}
		p=i; //H�� ��ġ i 
	} 
	
	if(ch[p+1]=='\0') h=1; //p+1�� ���� null �϶� H�� ���� 1 
	else {
		for(i=p+1; ch[i]!='\0'; i++) { //p+1���� ������ 
			h=h*10+ch[i]-48; //H�� ���� ���ϱ� 
		}
	}
	
	res=c*12+h*1; //���� ���ϱ� 
	printf("%d\n",res); //��� 
	
	return 0;
} 
