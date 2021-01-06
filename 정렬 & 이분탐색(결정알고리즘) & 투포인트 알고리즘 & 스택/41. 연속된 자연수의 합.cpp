//연속된 자연수의 합 

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N, tmp, num=1, i, cnt=0;
	scanf("%d", &N);
	tmp=N; //출력을 위한 임시저장 
	N--; //1을 먼저 빼줌 
	while(N>0){
		num++; //num 증가 
		N-=num; //빼줌 (나중에 계속해서 num을 빼줌)
		if(N%num==0){ //뺀 후 나눴을 때 나머지가 없다면 
			for(i=1; i<num; i++){
				printf("%d + ", N/num+i); //첫 숫자 + 몫 부터 출력 
			}
			printf("%d = %d\n",N/num+i, tmp); //마지막 숫자 + 입력받은 숫자 출력 
			cnt++; //횟수 
		}
	}
	printf("%d",cnt);//횟수 출력 
	
	return 0; 
}

