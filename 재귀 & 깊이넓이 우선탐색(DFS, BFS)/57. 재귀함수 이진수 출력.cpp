//����Լ� ������ ��� ���� 100
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

void bin(int N){ //2���� ��� �Լ� 
	if(N<1) return;
	else{
		bin(N/2);
		printf("%d",N%2);
	}
}

int main(){
	int N;
	scanf("%d",&N); //input
	
	bin(N); //output
	
	return 0;
} 
