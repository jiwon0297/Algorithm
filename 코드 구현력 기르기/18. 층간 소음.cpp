// �������� ���� 100 

#include <stdio.h>

int main(){
	int N, M, msr, i, cnt=0, max=-2147000000; 
	
	scanf("%d %d",&N,&M);
	
	for(i=1; i<=N; i++){
		scanf("%d",&msr);
		if(msr>M) cnt++; //����ġ�� M������ ������ cnt++  
		else cnt=0; //�ƴϸ� �ʱ�ȭ 
		
		if(cnt>max) max=cnt; //cnt ���� ���� Ŭ ���� ��� 
	}
	
	if(max==0) printf("-1"); //�︰���� �ѹ��� ������ -1 ��� 
	else printf("%d\n",max);
	
	return 0;
}
