//營敝л熱 碟戮
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

void rec(int N){ //營敝л熱 
	if(N==0) return;
	else{
		rec(N-1);
		printf("%d ",N);
	}
}

int main(){
	int N;
	scanf("%d",&N);
	
	rec(N); //營敝л熱 ��轎 
	
	return 0;
	
} 
