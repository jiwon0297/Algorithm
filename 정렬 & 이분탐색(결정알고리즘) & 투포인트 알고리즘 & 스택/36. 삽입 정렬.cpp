//�������� �߿��� 

#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int N, i, j, temp;
	scanf("%d",&N);
	
	vector<int> a(N);
	
	for(i=0; i<N; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=1; i<N; i++){
		temp = a[i]; //���� �̸� �־�ΰ� 
		for(j=i-1; j>=0; j--){
			if(a[j]>temp) a[j+1]=a[j]; //temp ������ ū ���̸� �� ���� �ڸ��� ū ���� ���� 
			else break;
		}
		a[j+1] = temp; //temp ���� 
	}
	
	for(i=0; i<N; i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
