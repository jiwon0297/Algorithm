// 나이차이 점수 100 

#include <iostream>
using namespace std;

int main(){
	int n, i, a, max=-2147000000, min=2147000000; //선언 max 는 최소한의 값이어야 함 
	cin>>n; //입력 
	for(i=1; i<=n; i++){
		cin>>a;
		if(a>max) max=a; // 최대값 구하기 
		if(a<min) min=a; // 최소값 구하기 
	}
	
	cout<<max-min;

	return 0;
}
