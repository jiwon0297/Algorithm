// ����� ��� ���� 100 

#include <stdio.h>
int cnt[50001]; 

int main(){
	int N, i, j;
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){ 
		for(j=i; j<=N; j=j+i){ //i�� ������� ���鼭 �迭�� �߰��ϱ� 
			cnt[j]++; //��� ���� 
		}
	} 
	
	for(i=1; i<=N; i++){
		printf("%d ", cnt[i]); //��� 
	}
	
	return 0;
}

