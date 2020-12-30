//마라톤 점수 100

#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int N, i, j;
	scanf("%d",&N);
	vector<int> num(N), list(N);
	 
	for(i=0; i<N; i++){
		scanf("%d",&num[i]); //입력 
		list[i]=1;
	}
	
	for(i=N-1; i>=0; i--){ //마지막부터 거꾸로 
		for(j=i-1; j>=0; j--){
			if(num[i]<=num[j]) list[i]++; //자신보다 크거나 같으면 등수 ++ 
		}
	}
	
	for(i=0; i<N; i++) printf("%d ",list[i]); //등수 출력 
	
	return 0;
} 
