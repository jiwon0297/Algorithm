//네트워크 선 자르기 (bottom-up) 
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

int main(){
	int N,i,dy[45];
	scanf("%d",&N);
	dy[1]=1;
	dy[2]=2;
	for(i=3; i<=N; i++){
		dy[i]=dy[i-2]+dy[i-1]; //점화식 
	}
	
	printf("%d\n",dy[N]);
}
