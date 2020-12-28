// 올바른 괄호 점수 100 

#include <stdio.h>
#define MAX_STACK_SIZE 100

using namespace std;

int stack[MAX_STACK_SIZE]; //stack size 
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
	return stack[top--];
}

int main(){
	char s[31]; 
	int i;
	scanf("%s",&s);
	
	// 열린괄호일때 push 닫힌괄호일때 pop 
	for(i=0; s[i]!='\0'; i++){
		if(s[i]=='('){
			push(s[i]);
		} else if(s[i]==')') pop();
		if(isEmpty()==true) break;
	}
	
	if(top==-1) printf("YES\n"); //처음으로 돌아온다면 
	else printf("NO\n"); //아니면 
	
	return 0;
}
