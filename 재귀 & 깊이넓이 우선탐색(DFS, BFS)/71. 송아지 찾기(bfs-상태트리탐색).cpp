//송아지 찾기(bfs:상태트리검색) 점수 100
#include<stdio.h>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	//input 
	int S,E,i,x,idx,d[3]={1,-1,5};
	vector<int> dis(10001);
	queue<int> Q;
	scanf("%d %d",&S,&E);
	
	//queue
	dis[S]=1;
	Q.push(S);
	while(!Q.empty()){
		x=Q.front();
		Q.pop();
		for(i=0; i<3; i++){
			idx=x+d[i]; //현수 위치에 갈수 있는 지점 넣기 
			if(idx<=0 || idx>10000) continue;
			if(idx==E){
				//output
				printf("%d\n",dis[x]); //제일 처음으로 만남 = 최소횟수 
				exit(0); //프로그램 종료 
			}
			if(dis[idx]==0){ //dis배열 = chk배열 
				dis[idx]=dis[x]+1; //거리 넣어주기 
				Q.push(idx); 
			}
		}
	}
	
	return 0;
}
