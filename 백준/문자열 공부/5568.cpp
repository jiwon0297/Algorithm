#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

int n,k;
vector<int> num, selects, visit;
set<string> st;

void fun(int dep){
	if(dep==k){
		string s;
		
		for(int i=0; i<selects.size(); i++){
			s+=to_string(selects[i]);
		}
		st.insert(s);
		return;
	}
	for(int i=0; i<n; i++){
		if(visit[i]) continue;
		visit[i]=1;
		selects.push_back(num[i]);
		fun(dep+1);
		visit[i]=0;
		selects.pop_back();
	}
}

int main(){
	cin>>n>>k;
	
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		num.push_back(a);
		visit.push_back(0);
	}
	
	fun(0);
	
	cout<<st.size()<<endl;
}
