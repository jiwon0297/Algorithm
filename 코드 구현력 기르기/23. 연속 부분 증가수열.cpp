//연속 부분 증가수열 점수 100

#include<stdio.h>
#include<vector>

using namespace std;

int main(){
	int N, i, cnt=1, max=-2147000000; 
	scanf("%d",&N);
	vector<int> num(N); //num 배열 동적 할당 
	
	for(i=0; i<N; i++){
		scanf("%d",&num[i]); //입력 
	}
	
	for(i=0; i<N-1; i++){
		if(num[i]<=num[i+1]) cnt+=1; //증가할때마다 cnt+=1 
		else cnt=1; //아니면 초기화 
		
		if(cnt>max) max=cnt; //최대 길이 
	}
	
	printf("%d",max);
	
	return 0;
} 
