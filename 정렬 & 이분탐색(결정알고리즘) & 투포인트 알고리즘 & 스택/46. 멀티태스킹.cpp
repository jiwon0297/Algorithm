//��Ƽ�½�ŷ ���� 100 
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,K,i,pos=0, cnt=0, p=0;
	scanf("%d",&N);
	vector<int> work(N+1);
	for(i=1; i<=N; i++){
		scanf("%d\n",&work[i]);
		p+=work[i];
	}
	scanf("%d",&K);
	
	if(K>=p){ //���Ⱑ ������ ������ �� ���� �������� ������ 
		printf("-1\n"); //-1 ��� 
		return 0;
	}
	
	while(1){ //���Ⱑ ������ �� 
		pos++;
		if(pos>N) pos=1; //�� ���̸� ������ ���ư��� 
		if(work[pos]!=0){
			work[pos]--; //�� -- 
			cnt++; //break point
		} 
		if(cnt==K) break;
	}
	
	while(1){ //������ ���� 
		pos++;
		if(pos>N) pos=1; //�� �ڸ����� �״�� 
		if(work[pos]!=0){ //0�� �ƴѰ� ã���� �ٷ� ��� 
			printf("%d\n",pos);
			break;
		}
	}

	return 0;
} 
