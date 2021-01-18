//기차운행 점수 100
#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;

int main(){
	stack<int> s; //stack 정의 
	int N,i,j=1,train;
	//input 
	scanf("%d",&N);
	vector<int> num(N+1);
	for(i=1; i<=N; i++){
		num[i]=i;
	}
	vector<char> po;
	
	//code
	for(i=1; i<=N; i++){
		scanf("%d",&train);
		s.push(train); //push 
		po.push_back('P'); //이때 공간이 생겨서 P를 넣음
		
		while(1){ //반복문 
			if(s.empty()) break;
			if(s.top()==num[j]){ //top과 순서와 같으면 pop 
				s.pop();
				j++;
				po.push_back('O');
			}
			else break; //아니면 다시 입력 
		}
	}
	
	if(!s.empty()) printf("impossible\n");
	else{
		for(i=0; i<po.size(); i++) printf("%c",po[i]);
	}
	
	return 0;
}
