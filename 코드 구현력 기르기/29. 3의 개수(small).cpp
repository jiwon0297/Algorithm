// 3�� ������?(small) ���� 100

#include<stdio.h>

int main(){
	int N, i, num=0, temp, digit;
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		temp=i;
		while(temp>0){ // ���� ������������ ������ (�ڸ��� ���� ���ϱ� ����) 
			digit=temp%10;
			if(digit==3) num++; //������ 3�̸� num ���� 
			temp=temp/10;
		}
	}
	printf("%d\n",num);
	return 0;
} 
