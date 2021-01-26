//�ִ� ���� ������(priority_queue) ���� 100
#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm> 
using namespace std;

//vector ������ ���� ����ü 
struct work{
	int money;
	int due;
	work(int a, int b){
		money=a;
		due=b;
	}
	//���ı��� : due�� ū ������ 
	bool operator<(work &b){
		return due>b.due;
	}
};

int main(){
	//input 
	int N,M,D,i,j,res=0,max=-2147000000;
	vector<work> W;
	priority_queue<int> pQ;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d %d",&M,&D);
		W.push_back(work(M, D));
		if(D>max){ //due �� ���� ū ���� max�� �� 
			max=D;
		}
	}
	sort(W.begin(), W.end());
	j=0;
	for(i=max; i>=1; i--){ //max���� ���ʷ� ������ 
		for( ; j<N; j++){ //j�� for ���������� ���� �ʱ�ȭ ���ϰ� ���� �������� �ٽ� �ݺ� 
			if(W[j].due<i) break; //������ ������� �̹Ƿ� i�� �ƴϸ� break 
			pQ.push(W[j].money); //�ش� due�� money�� queue�� ���� 
		}
		if(!pQ.empty()){
			res+=pQ.top(); //res�� �ִ��� ���ϰ� 
			pQ.pop(); //���ְ� �ٽ� �ݺ�
		}
	}
	
	printf("%d\n",res); //res ��� 
	return 0;
} 

