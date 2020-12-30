// 온도의 최대값 100점 

#include <stdio.h>
#include <vector> 
using namespace std;
int main(){
	int N, K, i, j, sum=0,max;
	scanf("%d %d",&N, &K);
	vector<int> tem(N);
	
	for(i=0; i<N; i++){
		scanf("%d",&tem[i]); //입력 
	} 
	
	for(i=0; i<K; i++){
		sum+=tem[i]; 
	}
	max=sum;
	for(i=K; i<N; i++){ //sum에 i-k번째의 값을 빼고 i번째 값을 더하면 그 다음 sum이 됨 
		sum=sum+(tem[i]-tem[i-K]);
		if(sum>max) max=sum;
	}
	
	printf("%d\n", max);
	return 0;
}
