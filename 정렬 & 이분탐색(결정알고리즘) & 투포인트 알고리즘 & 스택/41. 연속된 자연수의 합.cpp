//���ӵ� �ڿ����� �� 

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N, tmp, num=1, i, cnt=0;
	scanf("%d", &N);
	tmp=N; //����� ���� �ӽ����� 
	N--; //1�� ���� ���� 
	while(N>0){
		num++; //num ���� 
		N-=num; //���� (���߿� ����ؼ� num�� ����)
		if(N%num==0){ //�� �� ������ �� �������� ���ٸ� 
			for(i=1; i<num; i++){
				printf("%d + ", N/num+i); //ù ���� + �� ���� ��� 
			}
			printf("%d = %d\n",N/num+i, tmp); //������ ���� + �Է¹��� ���� ��� 
			cnt++; //Ƚ�� 
		}
	}
	printf("%d",cnt);//Ƚ�� ��� 
	
	return 0; 
}

