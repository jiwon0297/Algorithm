#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,string> a, pair<int,string> b){
	return a.first<b.first;
}

int main(){
	int N;
	cin>>N;
	vector<pair<int, string> > info;
	
	for(int i=0; i<N; i++){
		int age;
		string name;
		cin>>age>>name;
		
		info.push_back(make_pair(age, name));
	}
	
	stable_sort(info.begin(), info.end(), compare);
	
	for(int i=0; i<info.size(); i++){
		cout<<info[i].first<<' '<<info[i].second<<'\n';
	}
	
	return 0;
}
