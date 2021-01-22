//��� Ž�� ���� 100 
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int matrix[21][21], chk[30], N, M, cnt=0;

void dfs(int x){
	if(x==N){
		cnt++; //�����Ͽ����� count ++ 
	} else {
		for(int i=1; i<=N; i++){
			if(matrix[x][i]==1 && chk[i]==0){ //�� �� �ְ�, �ݺ��� �ƴϸ� 
				chk[i]=1; //check �迭 1�� �ٲٰ� 
				dfs(i); //dfs �θ��� 
				chk[i]=0; //check �ٽ� Ǯ���ֱ� 
			}
		}
	}
}

int main(){
	//input 
	int i, dep, arr;
	scanf("%d %d",&N,&M);
	for(i=1; i<=M; i++){
		scanf("%d %d", &dep, &arr);
		matrix[dep][arr]++; //������� ����� 
	} 
	
	chk[1]=1; //check �迭 
	dfs(1); //�Լ�ȣ�� 
	
	printf("%d\n", cnt);
	return 0;
} 
