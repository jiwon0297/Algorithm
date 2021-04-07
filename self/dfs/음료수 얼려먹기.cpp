#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N,M,cnt=0;
int ice[1001][1001], chk[1001][1001];

bool dfs(int x, int y){
	if(x<1 || x>N || y<1 || y>M) return false;
	if(ice[x][y]==0){
		ice[x][y]=1;
		dfs(x+1,y);
		dfs(x-1,y);
		dfs(x,y+1);
		dfs(x,y-1); //�����¿� Ž�� 
		return true; //�� 0�̸� true ���� 
	}
	return false;
}

int main(){
	cin >> N >> M;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			cin >> ice[i][j];
		}
	}	
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			if(dfs(i,j)==true) cnt++;
		}
	} 
	
	printf("%d",cnt);
	
	return 0;
}
