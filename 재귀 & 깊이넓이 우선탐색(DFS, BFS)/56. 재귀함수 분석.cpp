//����Լ� �м�
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

void rec(int N){ //����Լ� 
	if(N==0) return;
	else{
		rec(N-1);
		printf("%d ",N);
	}
}

int main(){
	int N;
	scanf("%d",&N);
	
	rec(N); //����Լ� ȣ�� 
	
	return 0;
	
} 
