//다익스트라 알고리즘 -인접리스트로 구현해봄 
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int ch[30],sum=0,minn;
vector<pair<int, int> > matrix[30]; //인접리스트 위해 

void dfs(int x, int sum, int y){
	if(x==y){
		minn=2147000000; //minn 초기화(6까지 해야하기때문에 계속초기화시킴) 
		if(sum<minn){
			minn=sum;
		}
	} else{
		if(matrix[x].size()!=0){
			for(int i=0; i<matrix[x].size(); i++){
				//ch가 안되어있고 경로가 있다면 
				if(ch[matrix[x][i].first]==0 && matrix[x][i].first!=0){
					ch[matrix[x][i].first]=1;
					dfs(matrix[x][i].first, sum+matrix[x][i].second, y);
					ch[matrix[x][i].first]=0;
				} else minn=2147000000; //없으면 2147000000으로 초기화 
			}
		}
	}
}

int main(){
	int N,M,A,B,C,i;
	//input
	scanf("%d %d",&N,&M);
	for(i=1; i<=M; i++){
		scanf("%d %d %d",&A,&B,&C);
		matrix[A].push_back({B,C}); //인접리스트 구현 
	}
	
	ch[1]=1;
	//output
	for(i=2; i<=N; i++){
		dfs(1,0,i); //함수호출 y라는 목적지까지 넘겨줌 
		if(minn==2147000000){ //최소가 생기지 않고 초기화시킨 그대로라면 
			printf("%d : impossible\n",i); //impossible 
		} else printf("%d : %d\n",i,minn); //아니면 minn 출력 
	}
	return 0;
} 
