//Least Recently Used 점수 100

#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int S, N, i, j, pos;
	scanf("%d %d",&S, &N);
	
	vector<int> num(N), cache(S); //배열 초기화 
	
	for(i=0; i<N; i++){
		scanf("%d",&num[i]); //num input
	}
	
	for(i=0; i<N; i++){
		pos=-1;
		for(j=0; j<S; j++){
			if(cache[j]==num[i]) pos=j; //cash 안에 num이 있는지 확인, 있으면 해당 position 저장 
		}
		if(pos==-1){ //cachemiss
			for(j=S-1; j>=1; j--){ //맨끝부터 시작 
				cache[j]=cache[j-1]; //땡겨주기 
			}
			cache[0]=num[i]; //값을 항상 맨 앞에다 넣어줌 
		} 
		else { //cachehit
			for(j=pos; j>=1; j--){ //동일한 값의 위치부터 시작 
				cache[j]=cache[j-1]; //땡겨주기 
			}
			cache[0]=num[i]; //값을 맨 앞에 넣어줌 
		}
	}
	
	for(i=0; i<S; i++){
		printf("%d ",cache[i]); //output
	}
	
}
