//N!의 표현법 점수 100

#include<stdio.h>
#include<vector>
using namespace std;

bool isPrime(int x){ //소수인지 확인하는 함수  
	int i;
	bool flag = true; //기본값을 true 로 설정하고  
	for(i=2; i*i<=x; i++){
		if(x%i==0) { // 2부터 자기자신 전숫자까지 나눠지는 숫자 하나라도 있다면 
			flag=false; //false로 바꾸고 break 
			break;
		}
	}
	return flag;
}

int main(){
	int N, i, j, temp;
	scanf("%d", &N);
	vector<int> chk(N+1);
	
	for(i=2; i<=N; i++){
		temp=i;
		j=2;
		while(1){ //소인수 분해 
			if(temp%j==0){ //일단 2로 나누고 나누어 떨어지지 않으면 
				temp=temp/j;
				chk[j]++;
			}
			else j++; //j증가 시킴 그러면 소수로만 분해 가능 
			if(temp==1) break; //i값이 1되면 break 
		}
	}
	
	printf("%d! = ",N);
	
	for(i=2; i<=N; i++){
		if(isPrime(i)) printf("%d ",chk[i]);
	}
	
	return 0;
} 
