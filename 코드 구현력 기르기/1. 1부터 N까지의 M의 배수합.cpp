// 1부터 N까지의 M의 배수합 점수 100 

#include <iostream>
using namespace std;

int main(){
	int n, m, i, sum=0; //선언 
	cin>>n>>m; //입력 
	for(i=0; i<=n; i++){
		if(i%m==0){
			sum+=i; //m의 배수일 때마다 더하고 출력 
		}
	}
	cout<<sum;
	return 0;
}
