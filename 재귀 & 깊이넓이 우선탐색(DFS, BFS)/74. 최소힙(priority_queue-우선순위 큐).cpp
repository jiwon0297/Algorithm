//√÷º“»¸(priority_queue : øÏº±º¯¿ß ≈•)
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
				printf("%d\n",-pQ.top()); //∫Œ»£∏¶ πŸ≤„¡‹ 
				pQ.pop();
			}
		} else pQ.push(-a); //∫Œ»£∏¶ πŸ≤„¡‹ 
	}
	
	return 0;
} 
