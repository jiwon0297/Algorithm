// ������ �� ����(large) ���� 100 

#include <stdio.h>

int main(){
	int N, num=0, c=1, d=9, res=0;
	scanf("%d",&N);
	
	while(num+d<N){
		res=res+(c*d);
		num=num+d; //�ڸ����� ���������ڸ� �Է°��� ���ϱ� ����.
		c++; //�ڸ��� ���� 
		d=d*10; //�����ڸ����� ���� 
	}
	
	res=res+(N-num)*c; //���� �ڸ����� �����ϰ� ���� ���ڵ� ������� 
	
	printf("%d\n",res);
	return 0;
}
