// ���ڸ� ���� ���� 100 

#include <stdio.h>
using namespace std;

int main(){
	char s[50];
	int res=0, cnt=0,i;
	scanf("%s", &s);
	
	for(i=0; s[i]!='\0'; i++){ //�迭�� �������� �ƴҶ��� ������ 
		if(s[i]>=48 && s[i]<=57) //ascii �ڵ� Ȱ�� 
			res=res*10+(s[i]-48); //result ���� ���� �ֱ� ó������ ������ ���ڰ� ������ ���;� �� 
	}
	
	for(i=1; i<=res; i++){
		if(res%i==0)
			cnt+=1; //��� ���� ���ϱ� 
	} 

	printf("%d\n%d",res,cnt);
	
	return 0;
}
