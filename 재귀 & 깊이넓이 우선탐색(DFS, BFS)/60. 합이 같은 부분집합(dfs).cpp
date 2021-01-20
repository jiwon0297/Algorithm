//합이 같은 부분집합(dfs : 아마존 인터뷰) 점수 100
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

//input
int N, total=0, clk=0;
vector<int> num(N+1);

void subset(int x, int sum){
	if(x==N+1){
		if((total-sum)==sum) clk++; //total-sum과 sum이 같으면 clk 증가 
	} else{
		subset(x+1, sum+num[x]); //왼쪽자식노드 
		subset(x+1, sum); //오른쪽자식노드 
	}
}

int main(){
	scanf("%d", &N);
	for(int i=1; i<=N; i++){
		scanf("%d",&num[i]);
		total+=num[i];
	}
	subset(1,0); //함수호출 
	
	//output
	if(clk>0) printf("YES\n");
	else printf("NO\n");
	
	return 0;
} 
