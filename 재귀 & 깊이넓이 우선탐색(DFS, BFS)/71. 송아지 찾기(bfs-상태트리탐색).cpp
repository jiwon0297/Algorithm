//�۾��� ã��(bfs:����Ʈ���˻�) ���� 100
#include<stdio.h>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	//input 
	int S,E,i,x,idx,d[3]={1,-1,5};
	vector<int> dis(10001);
	queue<int> Q;
	scanf("%d %d",&S,&E);
	
	//queue
	dis[S]=1;
	Q.push(S);
	while(!Q.empty()){
		x=Q.front();
		Q.pop();
		for(i=0; i<3; i++){
			idx=x+d[i]; //���� ��ġ�� ���� �ִ� ���� �ֱ� 
			if(idx<=0 || idx>10000) continue;
			if(idx==E){
				//output
				printf("%d\n",dis[x]); //���� ó������ ���� = �ּ�Ƚ�� 
				exit(0); //���α׷� ���� 
			}
			if(dis[idx]==0){ //dis�迭 = chk�迭 
				dis[idx]=dis[x]+1; //�Ÿ� �־��ֱ� 
				Q.push(idx); 
			}
		}
	}
	
	return 0;
}
