// �ùٸ� ��ȣ ���� 100 

#include <stdio.h>
#define MAX_STACK_SIZE 100

using namespace std;

int stack[MAX_STACK_SIZE]; //stack size 
int top=-1;

int isEmpty(){
	if(top<-1) return true;
	else return false;
} 

//������ ��á���� 
int isFull(){
	if(top>=MAX_STACK_SIZE-1) return true;
	else return false;
}

//push
void push(int value){
	if(isFull()==true) printf("������ ���� á���ϴ�.");
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
	
	// ������ȣ�϶� push ������ȣ�϶� pop 
	for(i=0; s[i]!='\0'; i++){
		if(s[i]=='('){
			push(s[i]);
		} else if(s[i]==')') pop();
		if(isEmpty()==true) break;
	}
	
	if(top==-1) printf("YES\n"); //ó������ ���ƿ´ٸ� 
	else printf("NO\n"); //�ƴϸ� 
	
	return 0;
}
