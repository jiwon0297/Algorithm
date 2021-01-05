//버블정렬 -> 시간복잡도가 가장 안좋은 정렬 

#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int N, i, j, temp;
	scanf("%d", &N);
	
	vector<int> a(N);
	
	for(i=0; i<N; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<N-1; i++){
		for(j=0; j<N-1-i; j++){ //j는 N-1 에서 i빼준 만큼만 돔 
			if(a[j]>a[j+1]){ //인접한 걸 비교하고 뒤바꿔줌 
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp; //제일 큰걸 해당 범위의 제일 뒤로 보냄 
			}
		} 
	} 
	
	for(i=0; i<N; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}
