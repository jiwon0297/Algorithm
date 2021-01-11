//멀티태스킹 점수 100 
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,K,i,pos=0, cnt=0, p=0;
	scanf("%d",&N);
	vector<int> work(N+1);
	for(i=1; i<=N; i++){
		scanf("%d\n",&work[i]);
		p+=work[i];
	}
	scanf("%d",&K);
	
	if(K>=p){ //전기가 꺼지는 시점이 다 돌린 시점보다 많으면 
		printf("-1\n"); //-1 출력 
		return 0;
	}
	
	while(1){ //전기가 꺼지기 전 
		pos++;
		if(pos>N) pos=1; //맨 끝이면 앞으로 돌아가기 
		if(work[pos]!=0){
			work[pos]--; //값 -- 
			cnt++; //break point
		} 
		if(cnt==K) break;
	}
	
	while(1){ //꺼지고 나서 
		pos++;
		if(pos>N) pos=1; //그 자리부터 그대로 
		if(work[pos]!=0){ //0이 아닌거 찾으면 바로 출력 
			printf("%d\n",pos);
			break;
		}
	}

	return 0;
} 
