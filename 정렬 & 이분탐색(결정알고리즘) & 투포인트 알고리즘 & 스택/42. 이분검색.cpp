//이분검색

#include<stdio.h>
#include<vector> 
#include<algorithm>
using namespace std;

int main(){
	int N, M, left=0, right, mid, i;
	scanf("%d %d",&N, &M);
	vector<int> a(N);
	for(i=0; i<N; i++){
		scanf("%d",&a[i]); //배열 입력 
	}
	sort(a.begin(), a.end()); //배열 오름차순 정렬 
	
	right=N-1;
		
	while(left<=right){ 
		mid=(left+right)/2;
		if(a[mid]==M) {
			printf("%d\n",mid+1);
			return 0;
		} else if(a[mid]>M) right=mid-1; //mid 번째 값이 더 크면 mid-1까지
		else if(a[mid]<M) left=mid+1; //mid 번째 값이 작으면 mid+1부터
	} 
	
	return 0;
}
