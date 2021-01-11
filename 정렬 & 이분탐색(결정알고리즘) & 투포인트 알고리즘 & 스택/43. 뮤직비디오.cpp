//뮤직비디오 점수 100

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int N, a[1001];

int count(int size){
	int i, cnt=1, sum=0;
	for(i=1; i<=N; i++){
		if(sum+a[i]>size){ //size 보다 크면 
			cnt++; //dvd 개수 추가 
			sum=a[i]; //sum 초기화 
		} else sum+=a[i]; //size 보다 작을때는 계속 추가 
	}	
	return cnt;
}

int main() {
	int M,i,left=1,right=0,mid,res,max=-2147000000;
	scanf("%d %d",&N,&M);
	for(i=1; i<=N; i++){
		scanf("%d",&a[i]); //입력 
		right+=a[i]; //right는 모든 분을 다 더한 값 
		if(a[i]>max) max=a[i];
	}
	
	while(left<=right){
		mid=(left+right)/2; 
		if(mid>=max && count(mid)<=M){ //mid가 max보다 크고 dvd 갯수가 M보다 작거나같으면 
			res=mid; //res 에 mid 를 넣고  
			right=mid-1; //사이즈를 줄여서 mid 계속 갱신 -> 최소값 찾기  
		} else left=mid+1; //M개의 dvd가 안되면 left를 키우기 
	}
	
	printf("%d\n", res);
	return 0;
}
