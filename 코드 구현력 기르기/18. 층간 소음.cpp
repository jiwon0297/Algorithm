// 층간소음 점수 100 

#include <stdio.h>

int main(){
	int N, M, msr, i, cnt=0, max=-2147000000; 
	
	scanf("%d %d",&N,&M);
	
	for(i=1; i<=N; i++){
		scanf("%d",&msr);
		if(msr>M) cnt++; //측정치가 M값보다 높으면 cnt++  
		else cnt=0; //아니면 초기화 
		
		if(cnt>max) max=cnt; //cnt 값이 제일 클 때를 출력 
	}
	
	if(max==0) printf("-1"); //울린적이 한번도 없으면 -1 출력 
	else printf("%d\n",max);
	
	return 0;
}
