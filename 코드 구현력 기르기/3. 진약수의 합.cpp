// ������� �� ���� 100 

#include <iostream>
using namespace std;

int main(){
	int n, i, sum=1; //���� 
	cin>>n; //�Է� 
	cout<<1;
	for(i=2; i<n; i++){
		if(n%i==0){
			sum+=i; //������ �������� �� �϶��� sum 
			cout<<" + "<<i;
		}
	}
	cout<<" = "<<sum;
	return 0;
}
