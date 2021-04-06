#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int moving[8][2]={
		{1,-2}, {2,-1}, {2,1}, {1,2}, {-1,2}, {-2,1}, {-2,-1}, {-1,-2}
	};
	
bool isIn(int x, int y, int num){
	int newx=x+moving[num][1];
	int newy=y+moving[num][0];
	return ((1<=newx && newx<=8)&&(1<=newy&&newy<=8));
}

int main(){
	string location;
	cin >> location;
	int x = location[1]-'1'+1;
	int y = location[0]-'a'+1;
	
	int cnt=0;
	for(int i=0; i<8; i++){
		if(isIn(x,y,i)) cnt++;
	}
	
	cout << cnt << '\n';
	return 0;
} 
