#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
	stack<int> s;
	vector<int> num;
	int n;
	string res="";
	cin>>n;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		num.push_back(a);
	}

	int idx=0;
	for(int i=1; i<=n; i++){
		s.push(i);
		res+="+\n";
		
		while(!s.empty() && s.top()==num[idx]){
			s.pop();
			res+="-\n";
			idx++;
		}
	}
	if(!s.empty()) cout<<"NO"<<endl;
	else cout<<res<<endl;
}
