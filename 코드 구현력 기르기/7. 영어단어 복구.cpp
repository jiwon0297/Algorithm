// 영어단어 복구 점수 100 

#include <stdio.h>
using namespace std;

int main(){
	char s[101]; 
	int i, index=0;
	
	gets(s); //공백 포함할땐 scanf 불가능 
	
	for(i=0; s[i]!='\0'; i++){ //배열의 마지막이 아닐때만 돌도록 
		if(s[i]!=' '){
			if(s[i]>=65 && s[i]<=90){
				s[index++] = s[i]+32; //ascii 코드를 활용하여 소문자로 변환 
			} else{
				//index 값은 공백 문자가 아닌 값을 저장했을 때만 증가
				s[index++]=s[i]; // 공백이 아닐 경우 s[index]로 복사 후 index 증가	
			}
		} 
	}
	s[index] = '\0'; //문자열 끝에 null 저장 
	printf("%s\n",s);
	
	return 0;
}
