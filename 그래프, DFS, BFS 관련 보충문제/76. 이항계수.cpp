//���װ��
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int rec(int N, int R){
	if(N==R||R==0) return 1; //nCn�̰ų� nC0 �� ���
	else return rec(N-1,R-1)+rec(N-1,R); //nC(r-1)+nCr = nCr �ΰ��� ��� 
}

int main(){
	int N,R,res,i;
	scanf("%d %d",&N,&R); //input
	printf("%d\n", rec(N,R)); //output
	return 0;
} 
