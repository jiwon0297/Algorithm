#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comp(char a, char b){
    return a>b;
}

int main(){
    string N;
    cin>>N;
    vector<char> num;
    
    for(int i=0; i<N.length(); i++){
    	num.push_back(N[i]);
	}
	
	sort(num.begin(),num.end(),comp);
	
	for(int i=0; i<num.size(); i++){
		cout<<num[i];
	}
	
	return 0;
}
