//이항계수
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int rec(int N, int R){
	if(N==R||R==0) return 1; //nCn이거나 nC0 인 경우
	else return rec(N-1,R-1)+rec(N-1,R); //nC(r-1)+nCr = nCr 인것을 사용 
}

int main(){
	int N,R,res,i;
	scanf("%d %d",&N,&R); //input
	printf("%d\n", rec(N,R)); //output
	return 0;
} 
