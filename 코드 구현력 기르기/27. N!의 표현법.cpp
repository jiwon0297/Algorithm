//N!�� ǥ���� ���� 100

#include<stdio.h>
#include<vector>
using namespace std;

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
	int N, i, j, temp;
	scanf("%d", &N);
	vector<int> chk(N+1);
	
	for(i=2; i<=N; i++){
		temp=i;
		j=2;
		while(1){ //���μ� ���� 
			if(temp%j==0){ //�ϴ� 2�� ������ ������ �������� ������ 
				temp=temp/j;
				chk[j]++;
			}
			else j++; //j���� ��Ŵ �׷��� �Ҽ��θ� ���� ���� 
			if(temp==1) break; //i���� 1�Ǹ� break 
		}
	}
	
	printf("%d! = ",N);
	
	for(i=2; i<=N; i++){
		if(isPrime(i)) printf("%d ",chk[i]);
	}
	
	return 0;
} 
