//�˸��ٹٿ� 40���� ����(Bottom-up) 
#include<stdio.h> 
#include<algorithm>
#include<vector>
using namespace std;

int arr[21][21], dy[21][21];
int main(){
	int i,j,N;
	//input
	scanf("%d",&N);
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	dy[0][0]=arr[0][0]; //ù��° �� 
	
	//�����ڸ� �� 
	for(i=0; i<N; i++){
		dy[0][i]=dy[0][i-1]+arr[0][i];
		dy[i][0]=dy[i-1][0]+arr[i][0];
	}
	
	//dp
	for(i=1; i<N; i++){
		for(j=1; j<N; j++){
			dy[i][j]=min(dy[i-1][j],dy[i][j-1])+arr[i][j];
			//������ ���ʰ��� �ּҰ��� �ڽ��� �� ���� �� 
		}
	}
	//(N,N) �϶��� �� ��� 
	printf("%d",dy[N-1][N-1]);
	return 0;
}
