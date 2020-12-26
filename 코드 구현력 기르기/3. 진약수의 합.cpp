// 진약수의 합 점수 100 

#include <iostream>
using namespace std;

int main(){
	int n, i, sum=1; //선언 
	cin>>n; //입력 
	cout<<1;
	for(i=2; i<n; i++){
		if(n%i==0){
			sum+=i; //나누어 떨어지는 수 일때만 sum 
			cout<<" + "<<i;
		}
	}
	cout<<" = "<<sum;
	return 0;
}
