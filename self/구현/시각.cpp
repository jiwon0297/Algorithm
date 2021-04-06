#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N, res;
	cin >> N;
	
	if(N<3){
		res=(N+1)*((45*15)+(15*60));
	} else if(N>=3 && N<13) {
		res=(N)*((45*15)+(15*60)) + (60*60);
	} else if(N>=13 && N<23){
		res=(N-1)*((45*15)+(15*60)) + (60*60)*2;
	} else {
		res=(N-2)*((45*15)+(15*60)) + (60*60)*3;
	}
	
	cout << res << '\n';
	return 0;
}
