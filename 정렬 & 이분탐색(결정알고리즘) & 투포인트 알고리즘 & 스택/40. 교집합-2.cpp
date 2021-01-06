// ������ ���� 100

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N, M, i, j, temp, p1=0, p2=0, p3=0;
	scanf("%d",&N);
	vector<int> A(N);
	for(i=0; i<N; i++) scanf("%d", &A[i]); //ù��° ���� 
	sort(A.begin(), A.end()); //���� 
	
	scanf("%d",&M);
	vector<int> B(M);
	for(i=0; i<M; i++) scanf("%d", &B[i]); //�ι�° ���� 
	sort(B.begin(), B.end()); //���� 
	
	vector<int> C(N+M);
	
	while(p1<N && p2<M){
		if(A[p1]<B[p2]) p1++; // ���� ���� ������ �� ���� 
		else if(A[p1]>B[p2]) p2++;
		else { //������ 
			C[p3++]=B[p2++]; //�迭 C�� �ְ� ��� ������ �� ���� 
			p1++;
		}
	}
	
	for(i=0; C[i]!='\0'; i++) printf("%d ",C[i]); //output
	
	return 0;
}
