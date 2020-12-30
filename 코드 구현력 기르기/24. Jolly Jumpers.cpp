//Jolly Jumpers 점수 100

#include<stdio.h>
#include<vector>
#include<algorithm> 
using namespace std;

int main(){
	int N, i, diff, cnt=0;
	scanf("%d",&N);
	vector<int> num(N), temp(N);
	
	for(i=0; i<N; i++){
		scanf("%d", &num[i]); //입력 
	}
	
	for(i=0; i<N-1; i++){
		diff=abs(num[i]-num[i+1]); //차이의 절대값 
		if(diff>0 && diff<N && temp[diff]==0) temp[diff]=1; //차이값이 1~N-1 사이이거나 해당 배열값이 0일때만 1로 바꿈 
		else{ //배열값이 1이고 (숫자중복), 범위에 맞지 않는 숫자일 때는 NO 출력하고 바로 끝냄 
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n"); //한번도 안끝나고 for문을 제대로 돌았다면 YES 출력 
	
	return 0;
} 
