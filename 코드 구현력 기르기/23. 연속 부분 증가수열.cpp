//���� �κ� �������� ���� 100

#include<stdio.h>
#include<vector>

using namespace std;

int main(){
	int N, i, cnt=1, max=-2147000000; 
	scanf("%d",&N);
	vector<int> num(N); //num �迭 ���� �Ҵ� 
	
	for(i=0; i<N; i++){
		scanf("%d",&num[i]); //�Է� 
	}
	
	for(i=0; i<N-1; i++){
		if(num[i]<=num[i+1]) cnt+=1; //�����Ҷ����� cnt+=1 
		else cnt=1; //�ƴϸ� �ʱ�ȭ 
		
		if(cnt>max) max=cnt; //�ִ� ���� 
	}
	
	printf("%d",max);
	
	return 0;
} 
