//�� �迭 ��ġ�� ���� 100

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N, M, i, j, temp;
	scanf("%d",&N);
	vector<int> num1(N);
	for(i=0; i<N; i++) scanf("%d", &num1[i]); //ù��° ���� 
	
	scanf("%d",&M);
	vector<int> num2(M);
	for(i=0; i<M; i++) scanf("%d", &num2[i]); //�ι�° ���� 
	
	vector<int> sum(N+M);
	
	if(N<M){ //N�� M�� ũ�� �� 
		for(i=0; i<N; i++) sum[i]=num1[i]; //0~N���� �� ����, ���� 
		for(i=N; i<N+M; i++) sum[i]=num2[i-N]; //N~N+M���� �� ����, ���� 
	} else{
		for(i=0; i<M; i++) sum[i]=num2[i]; //0~M���� �� ����, ���� 
		for(i=M; i<N+M; i++) sum[i]=num1[i-M]; //M~N+M���� �� ����, ���� 
	}
	
	sort(sum.begin(), sum.end()); //����
	for(i=0; i<N+M; i++) printf("%d ", sum[i]);
	
	return 0;
}
