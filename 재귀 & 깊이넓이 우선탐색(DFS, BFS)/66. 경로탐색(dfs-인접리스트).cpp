//경로탐색 (dfs:인접리스트) 점수 100
#include<stdio.h>
#include<vector>
using namespace std;
 
int ch[30], cnt=0, N;
vector<int> matrix[30];

void dfs(int x){
	if(x==N){ //원하는 수에 도착했다면 
		cnt++; //cnt ++
	} else{
		for(int i=0; i<matrix[x].size(); i++){ //리스트 크기 만큼 
			if(ch[matrix[x][i]]==0){ //ch[도착한 수] ==0 이면 
				ch[matrix[x][i]]=1; //1로 변경 
				dfs(matrix[x][i]); //도착한수가 이제 출발이 됨 
				ch[matrix[x][i]]=0; //다시 풀어줌 
			}
		}
	}
}

int main(){
	int M, i, j, dep, arr;
	scanf("%d %d",&N,&M);
	for(i=1; i<=M; i++){
		scanf("%d %d", &dep, &arr);
		matrix[dep].push_back(arr); //연결리스트로 생성 
	}
	
	ch[1]=1;
	dfs(1); //함수호출 
	printf("%d\n",cnt); //output
	return 0;
} 
