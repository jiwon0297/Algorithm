// ������ �Ҽ� ���� 100 

#include <stdio.h>

int reverse(int x){ //���� ������ �Լ� 
	int res=0, temp;
	while(x>0){ //�� �ڸ����� 10���ؼ� ���ϱ� 
		temp=x%10;
		res=res*10+temp;
		x=x/10;
	} 
	return res;
}

bool isPrime(int x){ //�Ҽ����� Ȯ���ϴ� �Լ�  
	int i;
	if(x==1) return false; //1�϶� false 
	bool flag = true; //�⺻���� true �� �����ϰ�  
	for(i=2; i<x; i++){
		if(x%i==0) { // 2���� �ڱ��ڽ� �����ڱ��� �������� ���� �ϳ��� �ִٸ� 
			flag=false; //false�� �ٲٰ� break 
			break;
		}
	}
	return flag;
}

int main(){
	int N, num, i, temp;
	
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		scanf("%d",&num); //������� �Է¹ޱ�  
		temp = reverse(num); //�������� �� temp�� ���� 
		if(isPrime(temp)) printf("%d ", temp); //temp �� �Ҽ��̸� ��� 
	}
	
	return 0;
}
