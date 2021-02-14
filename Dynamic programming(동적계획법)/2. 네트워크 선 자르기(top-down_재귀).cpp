//네트워크 선 자르기 (top-down : 재귀, 메모이제이션)
#include<stdio.h>
int N;

void dfs(int a, int b, int c){ //a:순서, b:a번째 값 c:a+1번째 값 
	if(a==N){
		printf("%d\n",b); //a(=N)번째 값 출력 
	} else{
		dfs(a+1,c,b+c); //f(n)=f(n-1)+f(n-2) 활용 
	}
}

int main(){
	scanf("%d",&N); //input
	
	dfs(1,1,2); //함수 호출 
} 
