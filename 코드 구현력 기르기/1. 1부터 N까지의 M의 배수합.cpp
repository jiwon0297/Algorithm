// 1���� N������ M�� ����� ���� 100 

#include <iostream>
using namespace std;

int main(){
	int n, m, i, sum=0; //���� 
	cin>>n>>m; //�Է� 
	for(i=0; i<=n; i++){
		if(i%m==0){
			sum+=i; //m�� ����� ������ ���ϰ� ��� 
		}
	}
	cout<<sum;
	return 0;
}
