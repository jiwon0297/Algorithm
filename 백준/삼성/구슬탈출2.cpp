#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;

struct INFO {
	int rx,ry,bx,by,cnt;
};

INFO start;
string map[11];
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};

int bfs() {
	int visited[10][10][10][10]={0, };
	queue<INFO> q;
	q.push(start);
	visited[start.rx][start.ry][start.bx][start.by]=1;
	
	int res=-1;
	while(!q.empty()){
		INFO cur=q.front();
		q.pop();
		
		//종료조건 
		if(cur.cnt>10) break; //cnt가 10보다 큰경우 
		if(map[cur.rx][cur.ry]=='O' && map[cur.bx][cur.by]!='O'){ //최적값 
			res=cur.cnt;
			break;
		}
		
		//queue에 넣는 거 선택 
		for(int i=0; i<4; ++i){
			int ryy=cur.ry;
			int rxx=cur.rx;
			int byy=cur.by;
			int bxx=cur.bx;
			
			//빨간 공이 벽에 닿을때까지 간다 
			while(1){
				if(map[rxx][ryy]!='#' && map[rxx][ryy]!='O'){
					ryy+=dy[i];
					rxx+=dx[i];
				} else{
					if(map[rxx][ryy]=='#'){
						ryy-=dy[i];
						rxx-=dx[i];
					}
					break;
				}
			}
			
			while(1){
				if(map[bxx][byy]!='#' && map[bxx][byy]!='O'){
					byy+=dy[i];
					bxx+=dx[i];
				} else{
					if(map[bxx][byy]=='#'){
						byy-=dy[i];
						bxx-=dx[i];
					}
					break;
				}
			}
			
			if(ryy==byy && rxx==bxx) {
				if(map[rxx][ryy] != 'O'){
					int reddis=abs(ryy-cur.ry)+abs(rxx-cur.rx);
					int bluedis=abs(byy-cur.by)+abs(bxx-cur.bx);
					
					if(reddis>bluedis){
						ryy-=dy[i];
						rxx-=dx[i];
					} else{
						byy-=dy[i];
						bxx-=dx[i];
					}
				}
			} 
			
			if(visited[rxx][ryy][bxx][byy]==0){
				visited[rxx][ryy][bxx][byy]=1;
				INFO next;
				next.ry=ryy;
				next.rx=rxx;
				next.by=byy;
				next.bx=bxx;
				next.cnt=cur.cnt+1;
				q.push(next);
			}
		}
	}
	
	return res;
}

int main(){
    int N,M;
    cin>>N>>M;
    
    for(int i=0; i<N; i++){
    	cin>>map[i];
    	for(int j=0; j<M; j++){
    		if(map[i][j]=='R'){
    			start.rx=i;
    			start.ry=j;
			}
			
			if(map[i][j]=='B'){
				start.bx=i;
				start.by=j;
			}
		}
	}
	start.cnt=0;
	
	int res=bfs();
	cout<<res<<endl;
	
}
