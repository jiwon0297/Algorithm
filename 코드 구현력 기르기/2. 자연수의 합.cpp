// �ڿ����� �� ���� 100 

#include <iostream>
using namespace std;
int main(){
	int a, b, i, sum=0; //���� 
	cin>>a>>b; //�Է� 
	for(i=a; i<b; i++){
		sum+=i;
		cout<<i<<" + "; //b�������� ���+�� 
	}
	sum+=b; //b �� 
	cout<<b<<" = "<<sum; //b�� sum��� 
	return 0;
}
