// 숫자의 총 개수(small) 점수 100 

#include <stdio.h>

int main(){
	int N, i, num=0, temp;
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		temp=i;
		if(i<9) num++;
		else {
			while(temp>0){ // 몫이 있을때까지만 나누기 (자리수 개수 구하기 위한) 
				temp=temp/10;
				num++;
			}
		}
	}
	printf("%d\n",num);
	return 0;
}
