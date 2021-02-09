//피자 배달 거리
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int, int> > pizza;
vector<pair<int, int> > house;
int M,dist,minn=2147000000,ch[20],sum=0;

void dfs(int x, int y){
	if(x>pizza.size()) return;
	if(y==M){
		sum=0;
		//집과 피자의 좌표로 거리 구하기 
		for(int i=0; i<house.size(); i++){
			int x1=house[i].first;
			int y1=house[i].second;
			dist=2147000000;
			for(int j=0; j<M; j++){
				int x2=pizza[ch[j]].first;
				int y2=pizza[ch[j]].second;
				dist=min(dist, abs(x1-x2)+abs(y1-y2));
			}
			sum=sum+dist;
		}
		if(sum<minn) minn=sum;
	} else{
		ch[y]=x;
		dfs(x+1, y+1);
		dfs(x+1, y);
	}
}


int main(){
	int i,j,N,a;
	
	//input
	scanf("%d %d",&N,&M);
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			scanf("%d",&a);
			if(a==1) house.push_back(make_pair(i,j));
			else if(a==2) pizza.push_back(make_pair(i,j));
		}
	}
	
	dfs(0,0); //함수호출 
	//output
	printf("%d\n",minn);
	return 0;
} 
