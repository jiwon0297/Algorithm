//ȸ��̱�(�÷��̵�-���� ����)
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,a,b,i,j,k,score,cnt=0;
	//input
	scanf("%d",&N);
	vector<int> res(N+1);
	vector<vector<int> > dy(N+1, vector<int>(N+1,100));
	//input �� �ʱ�ȭ 
	for(i=1; i<=N; i++) dy[i][i]=0;
	while(1){
		scanf("%d %d",&a,&b);
		if(a==-1 && b==-1) break;
		dy[a][b]=1;
		dy[b][a]=1;
	}
	//dp(�÷��̵� ����) 
	for(k=1; k<=N; k++){
		for(i=1; i<=N; i++){
			for(j=1; j<=N; j++){
				dy[i][j]=min(dy[i][j], dy[i][k]+dy[k][j]);
			}
		}
	}
	//score ã��(ȸ�� �ĺ��� �� ���� ã��) 
	score=100;
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			res[i]=max(res[i],dy[i][j]);
		}
		if(res[i]<score) score=res[i];//res�� ���� ���� �� 
	}
	//ȸ���ĺ� ������� ���� 
	for(i=1; i<=N; i++){
		if(res[i]==score) cnt++;
	}
	//output
	printf("%d %d\n",score, cnt); //�ĺ� ������ ��� 
	for(i=1; i<=N; i++){
		if(res[i]==score) printf("%d ",i); //�ĺ� ���� ��� 
	}
	return 0;
} 
