//Special Sort ���� 100

#include<stdio.h>
#include<vector> 
using namespace std;

int main(){
	int N,i,j,temp;
	scanf("%d", &N);
	
	vector<int> a(N);
	
	for(i=0; i<N; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<N-1; i++){ //�������� 
		for(j=0; j<N-1-i; j++){
			if(a[j]>0 && a[j+1]<0){ //�տ��� ���, �ڰ� ������ �� �ڹٲ� 
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	for(i=0; i<N; i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
