//Jolly Jumpers ���� 100

#include<stdio.h>
#include<vector>
#include<algorithm> 
using namespace std;

int main(){
	int N, i, diff, cnt=0;
	scanf("%d",&N);
	vector<int> num(N), temp(N);
	
	for(i=0; i<N; i++){
		scanf("%d", &num[i]); //�Է� 
	}
	
	for(i=0; i<N-1; i++){
		diff=abs(num[i]-num[i+1]); //������ ���밪 
		if(diff>0 && diff<N && temp[diff]==0) temp[diff]=1; //���̰��� 1~N-1 �����̰ų� �ش� �迭���� 0�϶��� 1�� �ٲ� 
		else{ //�迭���� 1�̰� (�����ߺ�), ������ ���� �ʴ� ������ ���� NO ����ϰ� �ٷ� ���� 
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n"); //�ѹ��� �ȳ����� for���� ����� ���Ҵٸ� YES ��� 
	
	return 0;
} 
