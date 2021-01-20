//Ư�� �� �����(DFS) ���� 100
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int N, ans, clk=0;
vector<int> num(N+1);

void dfs(int x, int sum){ //dfs 
	if(x==N+1){
		if(sum==ans) clk++; //���� ans�� ������ clk ���� 
	} else{
		dfs(x+1, sum+num[x]); //+
		dfs(x+1, sum-num[x]); //-
		dfs(x+1, sum); //���� x 
	}
}

int main(){
	//input
	scanf("%d %d", &N, &ans);
	for(int i=1; i<=N; i++){
		scanf("%d", &num[i]);
	}
	
	dfs(1,0); //�Լ� ȣ�� 
	
	//output
	if(clk==0) printf("-1");
	else printf("%d\n", clk);
	
	return 0;
} 
