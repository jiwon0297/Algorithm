//Ugly Numbers ���� 100
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
	
	//�ݺ��� 
	for(i=2; i<=N; i++){
		a=num[p2]*2; //3����Ʈ �˰��� 
		b=num[p3]*3;
		c=num[p5]*5;
		
		if(a<b) min=a; //�ּҰ� ã�� 
		else min=b;
		if(c<min) min=c; 
		
		if(a==min) p2++; //�ּ��� ����Ʈ ++ 
		if(b==min) p3++;
		if(c==min) p5++;
		
		num[i]=min; //�迭�� �ּҰ� �ֱ� 
	}
	
	printf("%d\n", num[N]);
	return 0;
	
} 
