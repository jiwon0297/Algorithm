//K���� ��� ���� 100
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
	if(isEmpty()==true) printf("������ ������ϴ�");
	return stack[top--];
}

int main(){
	int N,K;
	scanf("%d %d",&N,&K); //input
	
	//16������ ���� char �� �ְ��� 
	char mod[17]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','\0'};

	//�ݺ��� 
	while(1){
		push(mod[N%K]); //���� ���������� stack�� ���� 
		N=N/K; //�ٽ� ���� 
	
		if(N<K){ //������ ���������� ������ 
			push(mod[N]); //�ش� �� �ְ� break; 
			break;
		}
	}
	
	while(top>=0){ //top>=0 �϶��� 
		printf("%c",pop()); //stack ��� 
	}
	
	return 0;
} 
