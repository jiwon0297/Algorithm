//두 배열 합치기 점수 100

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N, M, i, j, temp;
	scanf("%d",&N);
	vector<int> num1(N);
	for(i=0; i<N; i++) scanf("%d", &num1[i]); //첫번째 수열 
	
	scanf("%d",&M);
	vector<int> num2(M);
	for(i=0; i<M; i++) scanf("%d", &num2[i]); //두번째 수열 
	
	vector<int> sum(N+M);
	
	if(N<M){ //N과 M값 크기 비교 
		for(i=0; i<N; i++) sum[i]=num1[i]; //0~N까지 값 복사, 저장 
		for(i=N; i<N+M; i++) sum[i]=num2[i-N]; //N~N+M까지 값 복사, 저장 
	} else{
		for(i=0; i<M; i++) sum[i]=num2[i]; //0~M까지 값 복사, 저장 
		for(i=M; i<N+M; i++) sum[i]=num1[i-M]; //M~N+M까지 값 복사, 저장 
	}
	
	sort(sum.begin(), sum.end()); //정렬
	for(i=0; i<N+M; i++) printf("%d ", sum[i]);
	
	return 0;
}
