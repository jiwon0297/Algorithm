//N!에서 0의 개수 점수 100

#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int N, i, j, temp, cnt1=0, cnt2=0;
	scanf("%d", &N);
	
	for(i=2; i<=N; i++){
		temp=i;
		j=2;
		while(1){ //소인수 분해 
			if(temp%j==0){ //일단 2로 나누고 나누어 떨어지지 않으면 
				if(j==2) cnt1++;
				else if(j==5) cnt2++;
				temp=temp/j;
			}
			else j++; //j증가 시킴 그러면 소수로만 분해 가능 
			if(temp==1) break; //i값이 1되면 break 
		}
	}
	
	if(cnt1<cnt2) printf("%d\n", cnt1); // 2와 5의 개수중 작은걸 출력 
	else printf("%d\n", cnt2);
	
	return 0;
} 
