//���װ��(�޸������̼�) 
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int dy[22][21];
 
int rec(int N, int R){
	if(dy[N][R]>0) return dy[N][R]; //�ش� �迭 �� return 
	if(N==R||R==0) return 1; //nCn�̰ų� nC0 �� ��� 
	else return dy[N][R]=rec(N-1,R-1)+rec(N-1,R); //���� �迭�� �����صα� 
	// ��� ����, �� ������ 
}

int main(){
	int N,R,res,i;
	scanf("%d %d",&N,&R); //input
	printf("%d\n", rec(N,R)); //output
	return 0;
} 
