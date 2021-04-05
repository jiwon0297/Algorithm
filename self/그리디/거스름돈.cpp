#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int N,cnt;
	scanf("%d",&N);
	while(N>0){
		if(N>=500){
			N-=500;
			cnt++;
		} else if(N<500 && N>=100){
			N-=100;
			cnt++;
		} else if(N<100 && N>=50){
			N-=50;
			cnt++;
		} else {
			N-=10;
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
