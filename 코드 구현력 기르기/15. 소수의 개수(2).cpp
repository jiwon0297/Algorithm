// �Ҽ��� ���� ���� 100

#include <stdio.h>

bool isPrime(int x){ //�Ҽ����� Ȯ���ϴ� �Լ�  
	int i;
	bool flag = true; //�⺻���� true �� �����ϰ�  
	for(i=2; i*i<=x; i++){
		if(x%i==0) { // 2���� �ڱ��ڽ� �����ڱ��� �������� ���� �ϳ��� �ִٸ� 
			flag=false; //false�� �ٲٰ� break 
			break;
		}
	}
	return flag;
}

int main(){
	int N, i, cnt=0;
	
	scanf("%d",&N);
	
	for(i=2; i<=N; i++){
		if(isPrime(i)) cnt++; //i �� �Ҽ��̸� cnt ���� 
	}
	
	printf("%d",cnt);
	
	return 0;
}
