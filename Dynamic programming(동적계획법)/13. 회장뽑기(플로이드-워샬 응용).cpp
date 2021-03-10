//회장뽑기(플로이드-워샬 응용)
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,a,b,i,j,k,score,cnt=0;
	//input
	scanf("%d",&N);
	vector<int> res(N+1);
	vector<vector<int> > dy(N+1, vector<int>(N+1,100));
	//input 및 초기화 
	for(i=1; i<=N; i++) dy[i][i]=0;
	while(1){
		scanf("%d %d",&a,&b);
		if(a==-1 && b==-1) break;
		dy[a][b]=1;
		dy[b][a]=1;
	}
	//dp(플로이드 워샬) 
	for(k=1; k<=N; k++){
		for(i=1; i<=N; i++){
			for(j=1; j<=N; j++){
				dy[i][j]=min(dy[i][j], dy[i][k]+dy[k][j]);
			}
		}
	}
	//score 찾기(회장 후보가 될 점수 찾기) 
	score=100;
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			res[i]=max(res[i],dy[i][j]);
		}
		if(res[i]<score) score=res[i];//res중 가장 작은 값 
	}
	//회장후보 몇명인지 세기 
	for(i=1; i<=N; i++){
		if(res[i]==score) cnt++;
	}
	//output
	printf("%d %d\n",score, cnt); //후보 점수와 명수 
	for(i=1; i<=N; i++){
		if(res[i]==score) printf("%d ",i); //후보 정보 출력 
	}
	return 0;
} 
