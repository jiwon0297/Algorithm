#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;
int dy[1001];

int main(){
	int N;
	cin>>N;
	
	dy[1]=1;
	dy[2]=3;
	
	for(int i=3; i<=N; i++){
		dy[i]=(dy[i-1]+dy[i-2]*2)%796796;
	}
	
	cout<<dy[N]<<endl;
}
