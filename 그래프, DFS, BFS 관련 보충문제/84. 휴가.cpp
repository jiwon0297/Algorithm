//�ް� 
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int N,maxx=-2147000000,T[16],P[16];

void dfs(int L, int sum){
	if(L==N+1){
		if(sum>maxx) maxx=sum; //�ִ밪 
	} else{
		if(L+T[L]<=N+1) dfs(L+T[L],sum+P[L]); //�����ϸ� ��� �� ��¥, ��� 
		dfs(L+1,sum); //���� �ȵǸ� ���� ��¥, ��� 
	}
}

int main(){
	//input
	scanf("%d",&N);
	for(int i=1; i<=N; i++){
		scanf("%d %d",&T[i],&P[i]);
	}
	dfs(1,0); //�Լ� ȣ�� 
	printf("%d\n",maxx); //output
	
	return 0;
} 
