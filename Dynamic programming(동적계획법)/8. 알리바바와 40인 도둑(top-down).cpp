//�˸��ٹٿ� 40���� ����(Top-Down) 
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int arr[21][21],dy[21][21];

int dfs(int a, int b){
	if(dy[a][b]>0) return dy[a][b]; //�޸������̼�. ���� ������ �״�� ���
	if(a==1 && b==1){
		return arr[1][1];
	} else{
		if(b==1) return dy[a][b]=dfs(a-1,b)+arr[a][b]; //y��ǥ�� 0�϶� ���� �����ؼ� ����
		else if(a==1) return dy[a][b]=dfs(a,b-1)+arr[a][b]; //x��ǥ�� 0�϶� ���� �����ؼ� ����
		else return dy[a][b]=min(dfs(a-1,b),dfs(a,b-1))+arr[a][b]; //�޸������̼�
	}
}

int main(){
	int N,i,j;
	//input
	scanf("%d",&N);
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	//output
	printf("%d\n",dfs(N,N));
	return 0;
}
