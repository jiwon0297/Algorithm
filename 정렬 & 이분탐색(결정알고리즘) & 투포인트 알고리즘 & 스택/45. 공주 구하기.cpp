//���� ���ϱ� ���� 100 
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,K,pos=0,p=0,cnt=0,i;
	scanf("%d %d",&N,&K);
	vector<int> a(N+1);
	
	while(1){
		pos++; //1���� ���� 
		if(pos>N) pos=1; //N���� �Ѿ�� �ٽ� 1�� ���ƿ� 
		if(a[pos]==0) { //�迭 ���� 0�̸� 
			cnt++; //cnt �ø��� 
			if(cnt==K){ //cnt�� K�̸� 
				a[pos]=1; //�� �ڸ� ���� 1�� �ٲٰ� 
				cnt=0; //cnt �ʱ�ȭ 
				p++; //break point 1 �߰� 
			}
		}
		if(p==N-1) break; //break point N-1�̸� (1���� ���ƾ��ϱ⶧����) break 
	}
	
	for(i=1; i<=N; i++){
		if(a[i]==0){ //�迭 �� �� 0�� ��  
			printf("%d\n",i); //��� 
			break;
		}
	}
	
	return 0; 
} 
