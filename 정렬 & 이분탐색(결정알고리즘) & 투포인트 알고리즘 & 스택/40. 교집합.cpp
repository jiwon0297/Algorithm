// ������ ���� 80

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N, M, i, j, temp;
	scanf("%d",&N);
	vector<int> A(N);
	for(i=0; i<N; i++) scanf("%d", &A[i]); //ù��° ���� 
	sort(A.begin(), A.end());
	
	scanf("%d",&M);
	vector<int> B(M);
	for(i=0; i<M; i++) scanf("%d", &B[i]); //�ι�° ���� 
	sort(B.begin(), B.end());
	
	for(i=0; i<N; i++){ //���������� ��� (�� �� �������� �����̹Ƿ� �ڵ����� �������� ���) 
		for(j=0; j<M; j++){
			if(A[i]==B[j]) printf("%d ",B[j]);
		}
	}
	
	return 0;
}
