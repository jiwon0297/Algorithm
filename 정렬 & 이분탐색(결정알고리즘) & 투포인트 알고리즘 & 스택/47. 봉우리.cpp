//봉우리 점수 100 
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,i,j,cnt=0;
	scanf("%d",&N);
	vector<vector<int> > a(N+2, vector<int>(N+2,0)); //2차원배열 동적할당 
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			scanf("%d",&a[i][j]); //input 
		}
	}
	
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			if(a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1]){
				if(a[i][j]>a[i+1][j] && a[i][j]>a[i-1][j]) cnt++; //상하좌우 판단 
			}
		}
	}
	
	printf("%d", cnt); //cnt 출력 
	
	return 0;
} 
