//최대힙(priority_queue : 우선순위 큐)
#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm> 
using namespace std;

int main(){
	int a;
	priority_queue<int> pQ;
	while(1){
		scanf("%d",&a);
		if(a==-1){
			break;
		} else if(a==0){ 
			if(pQ.empty()) printf("-1");
			else{
				printf("%d",pQ.top()); //루트값 출력 
				pQ.pop(); //빼줌 
			}
		} else pQ.push(a); //넣어줌 
	}
	
	return 0; 
} 
