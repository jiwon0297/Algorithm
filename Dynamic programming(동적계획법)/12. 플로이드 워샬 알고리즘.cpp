//�÷��̵� ���� �˰��� 
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,M,a,b,c,i,j,k;
	//input
	scanf("%d %d",&N,&M);
	vector<vector<int> > dy(N+1, vector<int>(N+1, 5000));
	//�Է� �� dy���̺� �ʱ�ȭ 
	//dy[i][j] = i���� j�� ���µ� ��� �ּҺ�밪 
	for(i=1; i<=N; i++) dy[i][i]=0;
	for(i=1; i<=M; i++){
		scanf("%d %d %d",&a,&b,&c);
		dy[a][b]=c;
	}
	//dp
	for(k=1; k<=N; k++){
		for(i=1; i<=N; i++){
			for(j=1; j<=N; j++){
				dy[i][j]=min(dy[i][j],dy[i][k]+dy[k][j]);
			}
		}
	}
	//output
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			if(dy[i][j]==5000){
				printf("M "); //���� ���� 
			} else printf("%d ",dy[i][j]); //�ּҺ�� 
		}
		printf("\n");
	}
	return 0;
} 
