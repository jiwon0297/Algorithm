//������ ���Ϸ���
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

//Ž���� ���� 
int dx[8]={0,1,1,1,0,-1,-1,-1};
int dy[8]={-1,-1,0,1,1,1,0,-1};

struct loc{ //��ǥ ����ü 
	int x;
	int y;
	loc(int a, int b){
		x=a;
		y=b;
	}
};

queue<loc> Q;

int main(){
	int N, matrix[21][21],i,j,cnt=0;
	
	//input 
	scanf("%d",&N);
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			if(matrix[i][j]==1){ //1�̸� 
				Q.push(loc(i,j)); //Q�� ��ǥ�� push 
				matrix[i][j]=0; //�ش� �� 0���� ���� 
				
				//�ֺ�Ž�� 
				while(!Q.empty()){
					loc tmp = Q.front();
					Q.pop();
					
					// �ֺ� 8ĭ�� �˻��Ͽ� 1�̸� �ش���ǥ push �� 0���� �ٲ� 
					for(int i=0; i<8; i++){
						if(matrix[tmp.x+dx[i]][tmp.y+dy[i]]==1){
							Q.push(loc(tmp.x+dx[i],tmp.y+dy[i]));
							matrix[tmp.x+dx[i]][tmp.y+dy[i]]=0;
						}
					}
				}
				//�ֺ��� �� �̻� 1�� ������ cnt �߰� 
				cnt++;
			}
		}
	}
	
	//output
	printf("%d\n",cnt);
	return 0;
} 
