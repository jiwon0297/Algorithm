//최소비용 점수 100
#include<stdio.h>
#include<vector>
using namespace std;

int chk[30], N, minn=2147000000;
vector<pair<int, int> > matrix[30];

void dfs(int x, int sum){
	if(x==N){
		if(sum<minn) minn=sum; //sum 중 최소값 찾기 
	} else {
		for(int i=0; i<matrix[x].size(); i++){
			if(chk[matrix[x][i].first]==0){
				chk[matrix[x][i].first]=1;
				dfs(matrix[x][i].first,sum+matrix[x][i].second);
				//exp 값을 sum 하여 넘겨줌 
				chk[matrix[x][i].first]=0;
			}
		}
	}
}

int main(){
	int M, i, j, dep, arr, exp; //input 
	scanf("%d %d", &N,&M);
	for(i=1; i<=M; i++){
		scanf("%d %d %d",&dep,&arr,&exp);
		matrix[dep].push_back({arr, exp});
	}
	
	chk[1]=1;
	dfs(1,0); //함수 호출 
	printf("%d\n",minn); //output
	return 0;
}
