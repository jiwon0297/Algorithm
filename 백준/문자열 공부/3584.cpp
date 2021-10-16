#include<iostream>
#include<string>
using namespace std;

int parent[10001], visit[10001];

int main(){
	int T,N,A,B,C,D;
	cin>>T;

	for(int i=0; i<T; i++){
		cin>>N;
		
		//초기화 
		for(int j=1; j<=N; j++){
			visit[j]=0;
			parent[j]=j;
		}
		
		for(int j=0; j<N-1; j++){
			cin>>A>>B;
			parent[B]=A;
		}
		
		cin>>C>>D;
		visit[C]=1;
		
		//C 조상들을 방문하며 찾기 
		while(C!=parent[C]){
			C=parent[C];
			visit[C]=1;
		}
		
		while(true){
			if(visit[D]){ //V가 이미 visit 체크 되어있으면 u의 조상들인 것임 
				cout<<D<<endl;
				break; //가장 빠른 조상을 찾으므로 바로 반복문 빠져나옴 
			}
			D=parent[D]; //방문 안했으면 부모를 찾음 
		}
	
	
	}
}
