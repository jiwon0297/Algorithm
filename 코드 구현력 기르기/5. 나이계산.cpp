// 나이계산 점수 100 

#include <stdio.h> //cin, cout 보다 printf, scanf 사용 
using namespace std;

int main(){
	//선언 
	char id[20];
	int year, age;
	char gender;

	scanf("%s", &id); //주민등록번호 입력받기 
	
	switch(id[7]){ // switch문으로 사용, 뒷자리 1,2,3,4 나누어서 코드 작성 
		case '1':
			year = 1900 + ((id[0]-48)*10 + (id[1]-48)); //ascii 코드 활용해서 숫자 출력 
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
