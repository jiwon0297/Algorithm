// ����� ��� ���� 60 2�� �ð��ʰ� (�ð����⵵ O(n^2)) 

#include <stdio.h>
using namespace std;

int main(){
	int N, i, j, cnt;
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
		cnt=0; //�ʱ�ȭ�ϱ� (���� ���ڷ� �Ѿ�� 0���� �����ؾ��ϴϱ�) 
		for(j=1; j<=i; j++){
			if(i%j==0) cnt++; //��� ���� 
		}
		printf("%d ", cnt); //��� 
	} 
	
	return 0;
}

