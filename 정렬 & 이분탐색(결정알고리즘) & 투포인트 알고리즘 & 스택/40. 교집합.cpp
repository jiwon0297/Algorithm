// 교집합 점수 80

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N, M, i, j, temp;
	scanf("%d",&N);
	vector<int> A(N);
	for(i=0; i<N; i++) scanf("%d", &A[i]); //첫번째 집합 
	sort(A.begin(), A.end());
	
	scanf("%d",&M);
	vector<int> B(M);
	for(i=0; i<M; i++) scanf("%d", &B[i]); //두번째 집합 
	sort(B.begin(), B.end());
	
	for(i=0; i<N; i++){ //같을때마다 출력 (둘 다 오름차순 정렬이므로 자동으로 오름차순 출력) 
		for(j=0; j<M; j++){
			if(A[i]==B[j]) printf("%d ",B[j]);
		}
	}
	
	return 0;
}
