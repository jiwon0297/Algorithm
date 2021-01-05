//Special Sort 점수 100

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
	
	for(i=0; i<N-1; i++){ //버블정렬 
		for(j=0; j<N-1-i; j++){
			if(a[j]>0 && a[j+1]<0){ //앞에가 양수, 뒤가 음수일 때 뒤바꿈 
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
