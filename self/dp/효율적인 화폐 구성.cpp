#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int dy[10001];

int main(){
	int N,M;
	cin>>N>>M;
	vector<int> coin;
	for(int i=0; i<=M; i++){
		dy[i]=10001;
	}
	
	for(int i=0; i<N; i++){
		int x;
		cin>>x;
		coin.push_back(x);
	}
	
	dy[0]=0;
	for(int i=0; i<N; i++){
		for(int j=coin[i]; j<=M; j++){
			if(dy[j-coin[i]]!=10001) dy[j]=min(dy[j],dy[j-coin[i]]+1);
		}
	}
	
	if(dy[M]==10001) cout<<"-1"<<endl;
	else cout<<dy[M]<<endl;
}
