#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,M,K,sum=0,clk=0;
	scanf("%d %d %d",&N,&M,&K);
	vector<int> num(N);
	for(int i=0; i<N; i++){
		scanf("%d",&num[i]);
	}
	
	sort(num.begin(), num.end());
	
	while(clk!=M){
		clk++;
		if(clk%(K+1)==0){
			sum+=num[N-2];
		} else {
			sum+=num[N-1];
		}
	}
	
	printf("%d",sum);
	return 0;
}
