//����Ʈ�� ���̿켱Ž��(BFS)
#include<stdio.h>
#include<vector>
using namespace std;
int Q[100], front=-1, back=-1, chk[10];
vector<int> tree[10];

int main(){
	int i, dep, arr, x;
	for(i=1; i<=6; i++){
		scanf("%d %d", &dep, &arr);
		tree[dep].push_back(arr);
		tree[arr].push_back(dep);
	}
	
	Q[++back]=1;
	chk[1]=1;
	
	while(front<back){ //queue ���� 
		x=Q[++front]; //������ 
		printf("%d ",x);
		for(i=0; i<tree[x].size(); i++){ //�ֱ� 
			if(chk[tree[x][i]]==0){
				chk[tree[x][i]]=1;
				Q[++back]=tree[x][i];
			}
		}
	}
} 
