// ������ �� ����(small) ���� 100 

#include <stdio.h>

int main(){
	int N, i, num=0, temp;
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		temp=i;
		if(i<9) num++;
		else {
			while(temp>0){ // ���� ������������ ������ (�ڸ��� ���� ���ϱ� ����) 
				temp=temp/10;
				num++;
			}
		}
	}
	printf("%d\n",num);
	return 0;
}
