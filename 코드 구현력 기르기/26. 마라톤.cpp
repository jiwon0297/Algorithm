//������ ���� 100

#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int N, i, j;
	scanf("%d",&N);
	vector<int> num(N), list(N);
	 
	for(i=0; i<N; i++){
		scanf("%d",&num[i]); //�Է� 
		list[i]=1;
	}
	
	for(i=N-1; i>=0; i--){ //���������� �Ųٷ� 
		for(j=i-1; j>=0; j--){
			if(num[i]<=num[j]) list[i]++; //�ڽź��� ũ�ų� ������ ��� ++ 
		}
	}
	
	for(i=0; i<N; i++) printf("%d ",list[i]); //��� ��� 
	
	return 0;
} 
