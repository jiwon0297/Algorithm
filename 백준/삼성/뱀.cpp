#include<iostream>
#include<queue>
using namespace std;

int main(){
	int N,K,L;
	int map[101][101]={ 0, };
	pair<int,char> dir_change[101];
	int cur_chg=0;
	
	const int APPLE = 1;
	const int SNAKE = -1;
	
	int dx[4]={0,1,0,-1};
	int dy[4]={1,0,-1,0};
	
	int cur_dir=0;
	
	//초기 뱀 위치 
	map[0][0]=SNAKE;
	pair<int,int> head={0,0};
	queue<pair<int,int>> snake;
	snake.push(head);
	
	cin>>N>>K;
	
	for(int i=0; i<K; i++){
		int x,y;
		cin>>x>>y;
		map[x-1][y-1]=APPLE;
	}
	
	cin>>L;
	for(int i=0; i<L; i++){
		cin>>dir_change[i].first>>dir_change[i].second;
	}
	
	int sec=0;
	while(1){
		sec++;
		
		int nx=head.first+dx[cur_dir];
		int ny=head.second+dy[cur_dir];
		
		if(nx<0 || ny<0 || nx>=N || ny>=N) break; //벽
		else if(map[nx][ny]==SNAKE) break; //몸의 일부분
		else if(map[nx][ny]!=APPLE){ //사과가 없으면 꼬리가 이동 
			auto tail=snake.front();
			snake.pop();
			map[tail.first][tail.second]=0;
		}
		
		//머리 한칸 이동
		head={nx,ny};
		snake.push(head);
		map[nx][ny]=SNAKE;
		
		//진행 방향 찾기
		int dir_chg_sec=dir_change[cur_chg].first; 
		if(cur_chg<L && dir_chg_sec==sec){
			char dir=dir_change[cur_chg].second;
			if(dir=='L') cur_dir=(cur_dir+3)%4;
			else if(dir=='D') cur_dir=(cur_dir+1)%4;
			cur_chg++;
		}
	}
	
	cout<<sec<<'\n';
	return 0;
}
