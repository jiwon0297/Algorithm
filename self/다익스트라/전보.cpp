#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int N,M,start,a,b,c;
vector<pair<int, int> > map[30001];
vector<int> dist(30001,2147000000);

void dijkstra(int start){
	priority_queue<pair<int, int> > PQ;
	PQ.push({0,start});
	dist[start]=0;
	
	while(!PQ.empty()){
		int distance=-PQ.top().first;
		int now=PQ.top().second;
		PQ.pop();
		
		if(dist[now]<distance) continue;
		for(int i=0; i<map[now].size(); i++){
			int cost=distance+map[now][i].second;
			
			if(cost<dist[map[now][i].first]){
				dist[map[now][i].first]=cost;
				PQ.push(make_pair(-cost,map[now][i].first));
			}
		}
	}
}

int main(){
	cin>>N>>M>>start;
	
	for(int i=0; i<M; i++){
		cin>>a>>b>>c;
		map[a].push_back(make_pair(b,c));
	}
	
	dijkstra(start);
	
	int count=0;
	int maxx=-2147000000;
	for(int i=1; i<=N; i++){
		if(dist[i]!=2147000000){
			count+=1;
			maxx=max(maxx,dist[i]);
		}
	}
	
	cout<<count-1<<' '<<maxx<<endl;
}
