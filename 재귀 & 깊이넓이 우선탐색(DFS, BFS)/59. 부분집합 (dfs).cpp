//�κ����� (DFS ����Ž��) ���� 100
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int N, ch[11];

void subset(int x){
	if(x==N+1){ //break point
		for(int i=1; i<=N; i++){
			if(ch[i]==1) printf("%d ",i); //��� 
		}
		printf("\n");
	} else {
		ch[x]=1; //�����ڽĳ�� 
		subset(x+1);
		ch[x]=0; //������ �ڽĳ�� 
		subset(x+1);
	}
}

int main(){
	scanf("%d", &N);
	subset(1); //�Լ� ȣ�� 
	
	return 0;
} 
