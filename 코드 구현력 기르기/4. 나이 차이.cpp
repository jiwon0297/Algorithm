// �������� ���� 100 

#include <iostream>
using namespace std;

int main(){
	int n, i, a, max=-2147000000, min=2147000000; //���� max �� �ּ����� ���̾�� �� 
	cin>>n; //�Է� 
	for(i=1; i<=n; i++){
		cin>>a;
		if(a>max) max=a; // �ִ밪 ���ϱ� 
		if(a<min) min=a; // �ּҰ� ���ϱ� 
	}
	
	cout<<max-min;

	return 0;
}
