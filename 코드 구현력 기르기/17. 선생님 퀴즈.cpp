// ������ ���� ���� 100 

#include <stdio.h>

int main(){
	int N, i, j, num, sum, sumres;
	
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		scanf("%d %d",&num,&sum); //���ڶ� �� �Է¹ް� 
		sumres=0;
		for(j=1; j<=num; j++){
			sumres+=j;
		}
		if(sum==sumres) printf("YES\n"); //�Է¹��� ��� ���� ���� ���ٸ� yes
		else printf("NO\n"); //�ƴϸ� no 
	
	}
	return 0;
}
