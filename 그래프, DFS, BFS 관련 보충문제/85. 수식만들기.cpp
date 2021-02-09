//���ĸ����
#include<stdio.h>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int N,num[11],a[5],minn=2147000000,maxx=-2147000000;

void dfs(int x, int sum){
	if(x==N){
		if(sum<minn) minn=sum;
		if(sum>maxx) maxx=sum; //�ִ� �ּ� 
	} else {
		if(a[1]!=0){
			a[1]-=1;
			dfs(x+1,sum+num[x+1]);
			a[1]+=1; //����
		} 
		if(a[2]!=0){
			a[2]-=1;
			dfs(x+1,sum-num[x+1]);
			a[2]+=1; //����
		}
		if(a[3]!=0){
			a[3]-=1;
			dfs(x+1,sum*num[x+1]);
			a[3]+=1; //����
		}
		if(a[4]!=0){
			a[4]-=1;
			dfs(x+1,sum/num[x+1]);
			a[4]+=1; //������
		}
	}
}

int main(){
	int i;
	//input 
	scanf("%d",&N);
	for(i=1; i<=N; i++){
		scanf("%d", &num[i]);
	}
	for(i=1; i<=4; i++){
		scanf("%d",&a[i]);
	}
	
	dfs(1,num[1]); //�Լ�ȣ�� 
	
	//output
	printf("%d\n",maxx);
	printf("%d\n",minn);
	
	return 0;
}
