// ���� ���� ���� �ڸ��� ���� 100 

#include <stdio.h>
int num[10];

int main(){
	int i, max=-2147000000, res;
	char N[101];
	
	scanf("%s",&N);
	
	for(i=0; N[i]!='\0'; i++){
		num[N[i]-48]++; //0-9 �� �迭 �ڽ��� �ش� ���� ������ 1�� ������Ŵ 
	}
	
	for(i=0; i<=9; i++){
		if(num[i]>=max){ //=�� ���̸鼭 ������ ������ �� ū �� ����ϰ� �� 
			max=num[i];
			res=i;
		}
	}
	printf("%d\n", res); //max�϶��� i ��� 
	
	return 0;
}
