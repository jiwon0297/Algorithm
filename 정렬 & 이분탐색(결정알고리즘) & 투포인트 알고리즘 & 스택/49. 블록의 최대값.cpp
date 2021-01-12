//����� �ִ� ���� 100
#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int N,i,j,sum=0;
	scanf("%d", &N);
	vector<int> front(N), right(N); //���� �迭 
	vector<vector<int> > block(N, vector<int>(N,0)); //��� �迭 
	
	for(i=0; i<N; i++){
		scanf("%d", &front[i]); //input
	}
	for(i=0; i<N; i++){
		scanf("%d", &right[i]); //input
	}
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if(front[j]<=right[i]) block[i][j]=front[j]; //���� ���ڸ� ĭ�� �ֱ� 
			else block[i][j]=right[i];
		}
	}
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			sum+=block[i][j]; //�� ���� 
		}
	}
	printf("%d\n", sum); //output
}
