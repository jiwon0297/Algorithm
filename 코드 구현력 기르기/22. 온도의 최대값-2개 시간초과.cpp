// �µ��� �ִ밪 60�� ������ �ð��ʰ� 

#include <stdio.h>

int main(){
	int N, K, tem[100001], i, j, sum, max=-2147000000;
	scanf("%d %d",&N, &K);
	
	for(i=0; i<N; i++){
		scanf("%d",&tem[i]); //�Է� 
	} 
	
	for(i=0; i<=N-K; i++){ //���� for�� 
		sum=0;
		for(j=i; j<i+K; j++){
			sum+=tem[j];
		}
		if(sum>max) max=sum;
	}
	
	printf("%d\n", max);
	return 0;
}
