//Ugly Numbers 점수 100
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	//input
	int N,p2=1,p3=1,p5=1,a,b,c,i,min=2147000000;
	scanf("%d", &N);
	vector<int> num(N+1);
	num[1]=1;
	
	//반복문 
	for(i=2; i<=N; i++){
		a=num[p2]*2; //3포인트 알고리즘 
		b=num[p3]*3;
		c=num[p5]*5;
		
		if(a<b) min=a; //최소값 찾기 
		else min=b;
		if(c<min) min=c; 
		
		if(a==min) p2++; //최소인 포인트 ++ 
		if(b==min) p3++;
		if(c==min) p5++;
		
		num[i]=min; //배열에 최소값 넣기 
	}
	
	printf("%d\n", num[N]);
	return 0;
	
} 
