#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;

long long N,M,tree;
vector<long long> len;

bool isPossible(int height){
	tree=0;
	for(int i=0; i<N; i++){
		if(len[i]>=height) tree+=(len[i]-height);
		if(tree>=M) return true;
	}
	return false;
}

int main(){
	int left=0, right, mid, res;
    vector<long long> H;
	cin>>N>>M;
	for(int i=0; i<N; i++){
		long long length;
		cin>>length;
		len.push_back(length);
	}
	sort(len.begin(),len.end());
	right=len[N-1];
    
    while(left<=right){
        mid=(right+left)/2;
        if(isPossible(mid)){
            res=mid;
            left=mid+1;
        } else right=mid-1;
    }
	
    cout<<res<<endl;
}
