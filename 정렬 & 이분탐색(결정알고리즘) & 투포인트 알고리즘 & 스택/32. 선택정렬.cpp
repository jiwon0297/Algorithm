//선택정렬

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
			if(a[j]<a[idx]) idx=j; //idx는 가장 작은 값의 index를 가르킨다. 
		}
		temp=a[i]; //최종 idx의 값(i번째와 비교했을 때 가장 작은 값)과 i번째의 값을 바꿔줌
		a[i]=a[idx];
		a[idx]=temp;
	}
	
	for(i=0; i<N; i++){
		printf("%d ",a[i]); //output
	}
	
	return 0; 
}
