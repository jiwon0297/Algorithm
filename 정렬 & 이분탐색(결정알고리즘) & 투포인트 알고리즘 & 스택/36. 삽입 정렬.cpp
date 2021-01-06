//삽입정렬 중요함 

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
		temp = a[i]; //값을 미리 넣어두고 
		for(j=i-1; j>=0; j--){
			if(a[j]>temp) a[j+1]=a[j]; //temp 값보다 큰 값이면 그 다음 자리에 큰 값을 복사 
			else break;
		}
		a[j+1] = temp; //temp 삽입 
	}
	
	for(i=0; i<N; i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
