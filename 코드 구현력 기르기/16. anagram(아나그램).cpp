// Anagram(�Ƴ��׷�)

#include <stdio.h>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
	char a[101], b[101];
	int i, j, alen, blen, res=1, cnt=0;
	
	scanf("%s",&a);
	scanf("%s",&b);
	
	alen = strlen(a); //���ڿ� ���� ���ϱ� 
	blen = strlen(b);
	
	if(alen!=blen){
		res=1; //���̰� �ٸ��� ���ʿ� res=1 ��ȯ 
	} else {
		sort(a, a+alen); //���� �����ϱ� 
		sort(b, b+blen);
		
		for(i=0; i<alen; i++){ //���� �� ���� ���������� cnt ���� 
			if(a[i]==b[i]) cnt++;
		}
		
		if(cnt==alen) res=0; //cnt�� ���ڿ����̰� ������ res=0 
	}
	
	if(res==0) printf("YES"); //res�� 0�̸� yes 1�̸� no 
	else printf("NO");
	
	return 0;
}
