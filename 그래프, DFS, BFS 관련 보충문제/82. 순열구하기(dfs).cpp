//순열구하기(dfs)
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

int N,R,cnt=0,num[16],ch[20],res[20];

void dfs(int x){
	if(x==R){
		for(int j=0; j<x; j++){
			printf("%d ",res[j]); //output
		}
		cnt++;
		puts("");
	} else{
		for(int i=1; i<=N; i++){
			if(ch[i]==0){ //check 에 따라 값을 res 에 넣어줌 
				res[x]=num[i];
				ch[i]=1;
				dfs(x+1);
				ch[i]=0;
			}
		}
	}
}

int main(){
	int i;
	//input
	scanf("%d %d",&N, &R);
	for(i=1; i<=N; i++){
		scanf("%d",&num[i]);
	}
	dfs(0);
	printf("%d\n",cnt);
	return 0; 

} 
