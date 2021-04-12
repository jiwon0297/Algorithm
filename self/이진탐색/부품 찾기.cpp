#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int search(vector<int> array, int target, int start, int end){
	if(start>end) return -1;
	int mid=(start+end)/2;
	if(array[mid]==target) return mid;
	else if(array[mid]>target) return search(array,target,start,mid-1);
	else return search(array,target,mid+1,end);
}

int main(){
	int N,M;
	vector<int> store, client;
	
	cin>>N;
	for(int i=0; i<N; i++){
		int x;
		cin>>x;
		store.push_back(x);
	}
	sort(store.begin(),store.end());
	
	cin>>M;
	for(int i=0; i<M; i++){
		int target;
		cin>>target;
		client.push_back(target);
	}
	
	for(int i=0; i<M; i++){
		if(search(store,client[i],0,N-1)==-1) cout<<"no ";
		else cout<<"yes ";
	}
	
	return 0;
}
