//��Ʈ��ũ �� �ڸ��� (top-down : ���, �޸������̼�)
#include<stdio.h>
int N;

void dfs(int a, int b, int c){ //a:����, b:a��° �� c:a+1��° �� 
	if(a==N){
		printf("%d\n",b); //a(=N)��° �� ��� 
	} else{
		dfs(a+1,c,b+c); //f(n)=f(n-1)+f(n-2) Ȱ�� 
	}
}

int main(){
	scanf("%d",&N); //input
	
	dfs(1,1,2); //�Լ� ȣ�� 
} 
