#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N,M,res=0;
	cin>>N>>M;
	vector<int> len;
	for(int i=0; i<N; i++){
		int x;
		cin>>x;
		len.push_back(x);
	}
	sort(len.begin(),len.end());
	
	int start=0, end=len[N-1];
	while(start<=end){
		int sum=0;
		int mid=(start+end)/2;
		for(int i=0; i<N; i++){
			if(mid<len[i]) sum+=len[i]-mid;
		}
		
		if(sum<M) end=mid-1; 
		else {
			res=mid;
			start=mid+1;
		}
	}
	
	cout<<res<<endl;
}
