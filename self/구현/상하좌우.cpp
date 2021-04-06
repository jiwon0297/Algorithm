#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,x=1,y=1;
	cin >> N;
	cin.ignore();
	string plan;
	getline(cin, plan);
	for(int i=0; i<plan.size(); i++){
		if(plan[i]=='L'){
			if(y!=1) y--;
		} else if(plan[i]=='R'){
			if(y!=N) y++;
		} else if(plan[i]=='U'){
			if(x!=1) x--;
		} else if(plan[i]=='D'){
			if(x!=N) x++;
		}
	}
	
	cout << x << ' ' << y << '\n';
	return 0;
	
	
	return 0;
	
}
