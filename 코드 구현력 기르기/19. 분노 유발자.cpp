// �г� ������ ���� 100 

#include <stdio.h>

int main(){
	int N, i, hei[101], max, cnt=0;
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
		scanf("%d", &hei[i]);
	}  
	
	max=hei[N]; //�迭�� ���� ���������� max �ʱ�ȭ 
	for(i=N-1; i>=1; i--){
		if(hei[i]>max){ //���� ���������� ���鼭 max�� ����� cnt ���� 
			max=hei[i];
			cnt++;
		}
	}
	
	printf("%d\n", cnt); //cnt ��� 
	
	return 0;
}
