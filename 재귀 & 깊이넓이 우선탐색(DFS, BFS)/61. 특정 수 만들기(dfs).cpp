//특정 수 만들기(DFS) 점수 100
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int N, ans, clk=0;
vector<int> num(N+1);

void dfs(int x, int sum){ //dfs 
	if(x==N+1){
		if(sum==ans) clk++; //값이 ans와 같으면 clk 증가 
	} else{
		dfs(x+1, sum+num[x]); //+
		dfs(x+1, sum-num[x]); //-
		dfs(x+1, sum); //참여 x 
	}
}

int main(){
	//input
	scanf("%d %d", &N, &ans);
	for(int i=1; i<=N; i++){
		scanf("%d", &num[i]);
	}
	
	dfs(1,0); //함수 호출 
	
	//output
	if(clk==0) printf("-1");
	else printf("%d\n", clk);
	
	return 0;
} 
