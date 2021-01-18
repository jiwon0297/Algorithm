//K진수 출력 점수 100
#include<stdio.h>
#include<vector>
#include<algorithm>
#define MAX_STACK_SIZE 1000
using namespace std;

char stack[MAX_STACK_SIZE]; //stack size 
int top=-1;

int isEmpty(){
	if(top<-1) return true;
	else return false;
} 

//스택이 꽉찼을때 
int isFull(){
	if(top>=MAX_STACK_SIZE-1) return true;
	else return false;
}

//push
void push(int value){
	if(isFull()==true) printf("스택이 가득 찼습니다.");
	else stack[++top]=value;
}

//pop 
int pop(){
	if(isEmpty()==true) printf("스택이 비었습니다");
	return stack[top--];
}

int main(){
	int N,K;
	scanf("%d %d",&N,&K); //input
	
	//16진수를 위해 char 로 넣겠음 
	char mod[17]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','\0'};

	//반복문 
	while(1){
		push(mod[N%K]); //나눈 나머지값을 stack에 넣음 
		N=N/K; //다시 나눔 
	
		if(N<K){ //나눈게 진법수보다 작으면 
			push(mod[N]); //해당 값 넣고 break; 
			break;
		}
	}
	
	while(top>=0){ //top>=0 일때만 
		printf("%c",pop()); //stack 출력 
	}
	
	return 0;
} 
