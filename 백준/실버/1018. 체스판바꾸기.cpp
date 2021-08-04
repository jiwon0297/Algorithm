#include <iostream>
#include <algorithm> 
using namespace std;

int chess[51][51];

int check(int x, int y){
	int cnt1=0;
	int cnt2=0;
	
	for(int i=x; i<x+8; i++){
		for(int j=y; j<y+8; j++){
			if((i+j)%2==chess[i][j]) cnt1++; //시작 블록이 W일때 
			if((i+j+1)%2==chess[i][j]) cnt2++; //시작 블록이 B일때 
		}
	}
	return min(cnt1, cnt2); //최소값 반환 
} 

int main(){
	int N,M,res=2147000000;
	char color;
    cin >> N >> M;
    
    for(int i=0; i<N; i++){ //입력받기:B이면 0 W이면 1 
    	for(int j=0; j<M; j++){
    		cin>>color;
    		if(color=='B') chess[i][j]=0;
    		else chess[i][j]=1;
		}
	}
    
    for(int i=0; i<=N-8; i++){
    	for(int j=0; j<=M-8; j++){ //check함수에 탐색 시작 인덱스 전달 
    		if(res>check(i,j)) res=check(i,j); //최소값 구하기 
		}
	}
	
	cout<<res<<endl;
}
