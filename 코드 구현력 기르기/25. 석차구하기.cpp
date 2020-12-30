//석차 구하기(브루트포스) 점수 100

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,i,j;
	scanf("%d", &N); 
	vector<int> score(N), list(N);
	
	for(i=0; i<N; i++){
		scanf("%d",&score[i]);
		list[i]=1; //등수 배열 1로 초기화 
	}
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if(score[i]<score[j]) list[i]++; //작을때만 등수 ++ 
		}
	}
	
	for(i=0; i<N; i++){
		printf("%d ",list[i]); //등수 출력 
	}
	
	return 0;
} 
