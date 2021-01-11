//공주 구하기 점수 100 
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,K,pos=0,p=0,cnt=0,i;
	scanf("%d %d",&N,&K);
	vector<int> a(N+1);
	
	while(1){
		pos++; //1부터 시작 
		if(pos>N) pos=1; //N보다 넘어가면 다시 1로 돌아옴 
		if(a[pos]==0) { //배열 값이 0이면 
			cnt++; //cnt 늘리고 
			if(cnt==K){ //cnt값 K이면 
				a[pos]=1; //그 자리 값을 1로 바꾸고 
				cnt=0; //cnt 초기화 
				p++; //break point 1 추가 
			}
		}
		if(p==N-1) break; //break point N-1이면 (1명이 남아야하기때문에) break 
	}
	
	for(i=1; i<=N; i++){
		if(a[i]==0){ //배열 값 중 0인 값  
			printf("%d\n",i); //출력 
			break;
		}
	}
	
	return 0; 
} 
