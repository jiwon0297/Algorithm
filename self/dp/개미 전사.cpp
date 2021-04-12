#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int dy[101];

int main(){
	int N;
	cin>>N;
	vector<int> store;
	for(int i=1; i<=N; i++){
		int k;
		cin>>k;
		store.push_back(k);
	}
	dy[1]=store[1];
	dy[2]=max(store[1],store[2]);
	
	for(int i=3; i<=N; i++){
		dy[i]=max(dy[i-1], dy[i-2]+store[i]);
	}
	
	cout<<dy[N];
}
