// 자연수의 합 점수 100 

#include <iostream>
using namespace std;
int main(){
	int a, b, i, sum=0; //선언 
	cin>>a>>b; //입력 
	for(i=a; i<b; i++){
		sum+=i;
		cout<<i<<" + "; //b전까지만 출력+합 
	}
	sum+=b; //b 합 
	cout<<b<<" = "<<sum; //b와 sum출력 
	return 0;
}
