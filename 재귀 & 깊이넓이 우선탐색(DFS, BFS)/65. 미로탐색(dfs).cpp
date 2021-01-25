// �̷�Ž�� (DFS) ���� 100 
#include<stdio.h>

int maze[10][10], chk[10][10], cnt=0;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

void escape(int i, int j){
	int ii, jj;
	if(i==7 && j==7){ //break point
		cnt++;
	} else{
		for(int k=0; k<4; k++){
			ii=i+dx[k]; //12�ù���, 3�ù���, 6�ù���, 9�ù��� ������ Ž�� 
			jj=j+dy[k];

			if(ii<1 || ii>7 || jj<1 || jj>7) continue; //���� �� 
			if(maze[ii][jj]==0 && chk[ii][jj]==0){ //����̰�, �ߺ� x 
				chk[ii][jj]=1; //���ٴ� ǥ�� 
				escape(ii,jj); //��� 
				chk[ii][jj]=0; //�ٽ� Ǯ���� 
			}
		}
	}
}

int main(){
	int i,j;
	for(i=1; i<=7; i++){
		for(j=1; j<=7; j++){
			scanf("%d", &maze[i][j]); //input
		}
	}
	
	chk[1][1]=1; //���� ó��  
	escape(1,1); //�Լ�ȣ�� 
	printf("%d\n",cnt); //output
	return 0;
} 
