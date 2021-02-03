//���ͽ�Ʈ�� �˰��� -��������Ʈ�� �����غ� 
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int ch[30],sum=0,minn;
vector<pair<int, int> > matrix[30]; //��������Ʈ ���� 

void dfs(int x, int sum, int y){
	if(x==y){
		minn=2147000000; //minn �ʱ�ȭ(6���� �ؾ��ϱ⶧���� ����ʱ�ȭ��Ŵ) 
		if(sum<minn){
			minn=sum;
		}
	} else{
		if(matrix[x].size()!=0){
			for(int i=0; i<matrix[x].size(); i++){
				//ch�� �ȵǾ��ְ� ��ΰ� �ִٸ� 
				if(ch[matrix[x][i].first]==0 && matrix[x][i].first!=0){
					ch[matrix[x][i].first]=1;
					dfs(matrix[x][i].first, sum+matrix[x][i].second, y);
					ch[matrix[x][i].first]=0;
				} else minn=2147000000; //������ 2147000000���� �ʱ�ȭ 
			}
		}
	}
}

int main(){
	int N,M,A,B,C,i;
	//input
	scanf("%d %d",&N,&M);
	for(i=1; i<=M; i++){
		scanf("%d %d %d",&A,&B,&C);
		matrix[A].push_back({B,C}); //��������Ʈ ���� 
	}
	
	ch[1]=1;
	//output
	for(i=2; i<=N; i++){
		dfs(1,0,i); //�Լ�ȣ�� y��� ���������� �Ѱ��� 
		if(minn==2147000000){ //�ּҰ� ������ �ʰ� �ʱ�ȭ��Ų �״�ζ�� 
			printf("%d : impossible\n",i); //impossible 
		} else printf("%d : %d\n",i,minn); //�ƴϸ� minn ��� 
	}
	return 0;
} 
