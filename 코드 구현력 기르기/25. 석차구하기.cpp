//���� ���ϱ�(���Ʈ����) ���� 100

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
		list[i]=1; //��� �迭 1�� �ʱ�ȭ 
	}
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if(score[i]<score[j]) list[i]++; //�������� ��� ++ 
		}
	}
	
	for(i=0; i<N; i++){
		printf("%d ",list[i]); //��� ��� 
	}
	
	return 0;
} 
