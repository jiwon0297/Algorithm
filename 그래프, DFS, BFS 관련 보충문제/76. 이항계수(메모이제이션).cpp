//이항계수(메모이제이션) 
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int dy[22][21];
 
int rec(int N, int R){
	if(dy[N][R]>0) return dy[N][R]; //해당 배열 값 return 
	if(N==R||R==0) return 1; //nCn이거나 nC0 인 경우 
	else return dy[N][R]=rec(N-1,R-1)+rec(N-1,R); //값을 배열에 저장해두기 
	// 경로 압축, 더 빨라짐 
}

int main(){
	int N,R,res,i;
	scanf("%d %d",&N,&R); //input
	printf("%d\n", rec(N,R)); //output
	return 0;
} 
