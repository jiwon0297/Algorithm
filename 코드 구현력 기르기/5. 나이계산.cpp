// ���̰�� ���� 100 

#include <stdio.h> //cin, cout ���� printf, scanf ��� 
using namespace std;

int main(){
	//���� 
	char id[20];
	int year, age;
	char gender;

	scanf("%s", &id); //�ֹε�Ϲ�ȣ �Է¹ޱ� 
	
	switch(id[7]){ // switch������ ���, ���ڸ� 1,2,3,4 ����� �ڵ� �ۼ� 
		case '1':
			year = 1900 + ((id[0]-48)*10 + (id[1]-48)); //ascii �ڵ� Ȱ���ؼ� ���� ��� 
			age = 2019-year+1;
			gender = 'M';
			break;
		case '2':
			year = 1900 + ((id[0]-48)*10 + (id[1]-48));
			age = 2019-year+1;
			gender = 'W';
			break;
		case '3':
			year = 2000 + ((id[0]-48)*10 + (id[1]-48));
			age = 2019-year+1;
			gender = 'M';
			break;
		case '4':
			year = 2000 + ((id[0]-48)*10 + (id[1]-48));
			age = 2019-year+1;
			gender = 'W';
			break;
		default :
			printf("Error");
	}
	
	printf("%d %c",age,gender);

	return 0;
}
