//최대 수입 스케쥴(priority_queue) 점수 100
#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm> 
using namespace std;

//vector 정렬을 위한 구조체 
struct work{
	int money;
	int due;
	work(int a, int b){
		money=a;
		due=b;
	}
	//정렬기준 : due가 큰 순서로 
	bool operator<(work &b){
		return due>b.due;
	}
};

int main(){
	//input 
	int N,M,D,i,j,res=0,max=-2147000000;
	vector<work> W;
	priority_queue<int> pQ;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d %d",&M,&D);
		W.push_back(work(M, D));
		if(D>max){ //due 가 제일 큰 값을 max로 둠 
			max=D;
		}
	}
	sort(W.begin(), W.end());
	j=0;
	for(i=max; i>=1; i--){ //max부터 차례로 내려감 
		for( ; j<N; j++){ //j를 for 구문돌릴때 새로 초기화 안하고 멈춘 지점부터 다시 반복 
			if(W[j].due<i) break; //어차피 순서대로 이므로 i가 아니면 break 
			pQ.push(W[j].money); //해당 due의 money를 queue에 넣음 
		}
		if(!pQ.empty()){
			res+=pQ.top(); //res에 최대힙 더하고 
			pQ.pop(); //빼주고 다시 반복
		}
	}
	
	printf("%d\n",res); //res 출력 
	return 0;
} 

