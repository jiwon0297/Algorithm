// 교집합 점수 100

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N, M, i, j, temp, p1=0, p2=0, p3=0;
	scanf("%d",&N);
	vector<int> A(N);
	for(i=0; i<N; i++) scanf("%d", &A[i]); //첫번째 집합 
	sort(A.begin(), A.end()); //정렬 
	
	scanf("%d",&M);
	vector<int> B(M);
	for(i=0; i<M; i++) scanf("%d", &B[i]); //두번째 집합 
	sort(B.begin(), B.end()); //정렬 
	
	vector<int> C(N+M);
	
	while(p1<N && p2<M){
		if(A[p1]<B[p2]) p1++; // 작은 값의 포인터 값 증가 
		else if(A[p1]>B[p2]) p2++;
		else { //같으면 
			C[p3++]=B[p2++]; //배열 C에 넣고 모든 포인터 값 증가 
			p1++;
		}
	}
	
	for(i=0; C[i]!='\0'; i++) printf("%d ",C[i]); //output
	
	return 0;
}
