#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int pos[51][51], map[51][51];
int moving[4][2] {
	{-1,0}, {0,1}, {1,0}, {0,-1} //ºÏ µ¿ ³² ¼­ 
};

int main(){
	int N,M,a,b,d,cnt=1;
	cin >> N >> M;
	cin >> a >> b >> d;
	pos[a][b]=1;
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cin>>map[i][j];
		}
	}
	
	while(true){
		int clk=0;
		for(int i=0; i<4; i++){
			if(d==0) d=3;
			else d--;
			
			if(map[a+moving[d][0]][b+moving[d][1]]!=1
			&& pos[a+moving[d][0]][b+moving[d][1]]!=1){
				a+=moving[d][0];
				b+=moving[d][1];
				pos[a][b]=1;
				cnt++;
				break;
			} else clk++;
		}
		if(clk==4){
			a-=moving[d][0];
			b-=moving[d][1];
			
			if(map[a][b]==1) break;
		}
	}
	
	cout << cnt << '\n';
	return 0;
}
