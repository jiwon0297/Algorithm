//�������� ���� 100

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int N, a[1001];

int count(int size){
	int i, cnt=1, sum=0;
	for(i=1; i<=N; i++){
		if(sum+a[i]>size){ //size ���� ũ�� 
			cnt++; //dvd ���� �߰� 
			sum=a[i]; //sum �ʱ�ȭ 
		} else sum+=a[i]; //size ���� �������� ��� �߰� 
	}	
	return cnt;
}

int main() {
	int M,i,left=1,right=0,mid,res,max=-2147000000;
	scanf("%d %d",&N,&M);
	for(i=1; i<=N; i++){
		scanf("%d",&a[i]); //�Է� 
		right+=a[i]; //right�� ��� ���� �� ���� �� 
		if(a[i]>max) max=a[i];
	}
	
	while(left<=right){
		mid=(left+right)/2; 
		if(mid>=max && count(mid)<=M){ //mid�� max���� ũ�� dvd ������ M���� �۰ų������� 
			res=mid; //res �� mid �� �ְ�  
			right=mid-1; //����� �ٿ��� mid ��� ���� -> �ּҰ� ã��  
		} else left=mid+1; //M���� dvd�� �ȵǸ� left�� Ű��� 
	}
	
	printf("%d\n", res);
	return 0;
}
