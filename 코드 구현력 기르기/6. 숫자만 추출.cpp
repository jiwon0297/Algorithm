// 숫자만 추출 점수 100 

#include <stdio.h>
using namespace std;

int main(){
	char s[50];
	int res=0, cnt=0,i;
	scanf("%s", &s);
	
	for(i=0; s[i]!='\0'; i++){ //배열의 마지막이 아닐때만 돌도록 
		if(s[i]>=48 && s[i]<=57) //ascii 코드 활용 
			res=res*10+(s[i]-48); //result 값에 숫자 넣기 처음으로 나오는 숫자가 앞으로 나와야 함 
	}
	
	for(i=1; i<=res; i++){
		if(res%i==0)
			cnt+=1; //약수 개수 구하기 
	} 

	printf("%d\n%d",res,cnt);
	
	return 0;
}
