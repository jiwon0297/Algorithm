//���Ž�� (dfs:��������Ʈ) ���� 100
#include<stdio.h>
#include<vector>
using namespace std;
 
int ch[30], cnt=0, N;
vector<int> matrix[30];

void dfs(int x){
	if(x==N){ //���ϴ� ���� �����ߴٸ� 
		cnt++; //cnt ++
	} else{
		for(int i=0; i<matrix[x].size(); i++){ //����Ʈ ũ�� ��ŭ 
			if(ch[matrix[x][i]]==0){ //ch[������ ��] ==0 �̸� 
				ch[matrix[x][i]]=1; //1�� ���� 
				dfs(matrix[x][i]); //�����Ѽ��� ���� ����� �� 
				ch[matrix[x][i]]=0; //�ٽ� Ǯ���� 
			}
		}
	}
}

int main(){
	int M, i, j, dep, arr;
	scanf("%d %d",&N,&M);
	for(i=1; i<=M; i++){
		scanf("%d %d", &dep, &arr);
		matrix[dep].push_back(arr); //���Ḯ��Ʈ�� ���� 
	}
	
	ch[1]=1;
	dfs(1); //�Լ�ȣ�� 
	printf("%d\n",cnt); //output
	return 0;
} 
