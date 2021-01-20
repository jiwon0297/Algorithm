//���� ���� �κ�����(dfs : �Ƹ��� ���ͺ�) ���� 100
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

//input
int N, total=0, clk=0;
vector<int> num(N+1);

void subset(int x, int sum){
	if(x==N+1){
		if((total-sum)==sum) clk++; //total-sum�� sum�� ������ clk ���� 
	} else{
		subset(x+1, sum+num[x]); //�����ڽĳ�� 
		subset(x+1, sum); //�������ڽĳ�� 
	}
}

int main(){
	scanf("%d", &N);
	for(int i=1; i<=N; i++){
		scanf("%d",&num[i]);
		total+=num[i];
	}
	subset(1,0); //�Լ�ȣ�� 
	
	//output
	if(clk>0) printf("YES\n");
	else printf("NO\n");
	
	return 0;
} 
