#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int dy[30001];
int main(){
	int X;
	cin>>X;
	
	for(int i=2; i<X+1; i++){
		dy[i]=dy[i-1]+1;
		if(i%2==0) dy[i]=min(dy[i],dy[i/2]+1);
		if(i%3==0) dy[i]=min(dy[i],dy[i/3]+1);
		if(i%5==0) dy[i]=min(dy[i],dy[i/5]+1);
	}
	
	cout<<dy[X]<<endl;
}
