//��ܿ����� (top-down_�޸������̼�)
#include<stdio.h>

int dy[45];

int dfs(int n){
	if(n==1|n==2) return n;
	if(dy[n]>0) return dy[n];
	else return dy[n]=dfs(n-1)+dfs(n-2);
}
int main(){
	int N;
	scanf("%d",&N);
	printf("%d\n",dfs(N));
} 
