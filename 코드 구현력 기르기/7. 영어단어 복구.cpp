// ����ܾ� ���� ���� 100 

#include <stdio.h>
using namespace std;

int main(){
	char s[101]; 
	int i, index=0;
	
	gets(s); //���� �����Ҷ� scanf �Ұ��� 
	
	for(i=0; s[i]!='\0'; i++){ //�迭�� �������� �ƴҶ��� ������ 
		if(s[i]!=' '){
			if(s[i]>=65 && s[i]<=90){
				s[index++] = s[i]+32; //ascii �ڵ带 Ȱ���Ͽ� �ҹ��ڷ� ��ȯ 
			} else{
				//index ���� ���� ���ڰ� �ƴ� ���� �������� ���� ����
				s[index++]=s[i]; // ������ �ƴ� ��� s[index]�� ���� �� index ����	
			}
		} 
	}
	s[index] = '\0'; //���ڿ� ���� null ���� 
	printf("%s\n",s);
	
	return 0;
}
