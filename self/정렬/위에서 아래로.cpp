#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
	return a>b;
}

int main(){
	int N;
	cin >> N;
	vector<int> num(N+1);
	for(int i=0; i<N; i++){
		cin >> num[i];
	}
	
	sort(num.begin(),num.end(),compare);
	
	for(int i=0; i<N; i++){
		cout << num[i] << " ";
	}
	
	return 0;   
}
