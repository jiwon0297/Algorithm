//��������

#include<stdio.h>
#include<vector>

using namespace std;

int main(){
	int N, i, j, idx, temp;
	scanf("%d",&N);
	vector<int> a(N);
	
	for(i=0; i<N; i++){
		scanf("%d",&a[i]); //input 
	}
	
	for(i=0; i<N-1; i++){
		idx=i;
		for(j=i+1; j<N; j++){
			if(a[j]<a[idx]) idx=j; //idx�� ���� ���� ���� index�� ����Ų��. 
		}
		temp=a[i]; //���� idx�� ��(i��°�� ������ �� ���� ���� ��)�� i��°�� ���� �ٲ���
		a[i]=a[idx];
		a[idx]=temp;
	}
	
	for(i=0; i<N; i++){
		printf("%d ",a[i]); //output
	}
	
	return 0; 
}
