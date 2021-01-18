//�������� ���� 100
#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;

int main(){
	stack<int> s; //stack ���� 
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
		po.push_back('P'); //�̶� ������ ���ܼ� P�� ����
		
		while(1){ //�ݺ��� 
			if(s.empty()) break;
			if(s.top()==num[j]){ //top�� ������ ������ pop 
				s.pop();
				j++;
				po.push_back('O');
			}
			else break; //�ƴϸ� �ٽ� �Է� 
		}
	}
	
	if(!s.empty()) printf("impossible\n");
	else{
		for(i=0; i<po.size(); i++) printf("%c",po[i]);
	}
	
	return 0;
}
