// �ùٸ� ��ȣ ���� 100 

#include <stdio.h>
using namespace std;

int main(){
	char s[31]; 
	int i, index=0;
	
	scanf("%s",&s);
	
	for(i=0; s[i]!='\0'; i++){ //�迭�� �������� �ƴҶ��� ������ 
		if(s[i]=='('){
			index++;
		} else if(s[i]==')') index--;
		if(index<0) break;
	}
	
	if(index==0) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}
