//N!���� 0�� ���� ���� 100

#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int N, i, j, temp, cnt1=0, cnt2=0;
	scanf("%d", &N);
	
	for(i=2; i<=N; i++){
		temp=i;
		j=2;
		while(1){ //���μ� ���� 
			if(temp%j==0){ //�ϴ� 2�� ������ ������ �������� ������ 
				if(j==2) cnt1++;
				else if(j==5) cnt2++;
				temp=temp/j;
			}
			else j++; //j���� ��Ŵ �׷��� �Ҽ��θ� ���� ���� 
			if(temp==1) break; //i���� 1�Ǹ� break 
		}
	}
	
	if(cnt1<cnt2) printf("%d\n", cnt1); // 2�� 5�� ������ ������ ��� 
	else printf("%d\n", cnt2);
	
	return 0;
} 
