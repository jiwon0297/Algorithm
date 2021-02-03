//다익스트라 알고리즘 
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
	
int ch[30], dist[30];
vector<pair<int, int> > map[30];

int main(){
	freopen("input.txt", "rt", stdin);
	int n, m, i, j, a, b, c, min;
	
	//input
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c)); //인접리스트 
	}
	
	for(i=0; i<=n; i++) dist[i]=2147000000; //무한대로 초기화 
	
	dist[1]=0; //1번정점은 0 
	for(i=1; i<=n; i++){
		min=0;
		for(j=1; j<=n; j++){
			if(ch[j]==0 && dist[j]<dist[min])
				min=j;
		}
		ch[min]=1;
		for(j=0; j<map[min].size(); j++){
			int v=map[min][j].first;
			int cost=map[min][j].second;
			if(dist[v]>dist[min]+cost){ //작으면 바꿔줌 
				dist[v]=dist[min]+cost;
			}
		}
	}
	for(i=2; i<=n; i++){
		if(dist[i]!=2147000000) printf("%d : %d\n", i, dist[i]);
		else printf("%d : impossible\n", i);
	}
	return 0;
}

