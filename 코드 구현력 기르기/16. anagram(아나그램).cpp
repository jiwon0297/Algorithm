// Anagram(아나그램)

#include <stdio.h>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
	char a[101], b[101];
	int i, j, alen, blen, res=1, cnt=0;
	
	scanf("%s",&a);
	scanf("%s",&b);
	
	alen = strlen(a); //문자열 길이 구하기 
	blen = strlen(b);
	
	if(alen!=blen){
		res=1; //길이가 다르면 애초에 res=1 반환 
	} else {
		sort(a, a+alen); //각각 정렬하기 
		sort(b, b+blen);
		
		for(i=0; i<alen; i++){ //정렬 후 문자 같을때마다 cnt 증가 
			if(a[i]==b[i]) cnt++;
		}
		
		if(cnt==alen) res=0; //cnt와 문자열길이가 같으면 res=0 
	}
	
	if(res==0) printf("YES"); //res가 0이면 yes 1이면 no 
	else printf("NO");
	
	return 0;
}
