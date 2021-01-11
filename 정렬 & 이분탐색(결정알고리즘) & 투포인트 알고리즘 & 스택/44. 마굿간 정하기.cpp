// ������ ���ϱ� ���� 100 

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int N;

int count(int size, int x[]){
	int i,cnt=1, pos=x[0];
	for(i=1; i<N; i++){
		if(x[i]-pos>=size){ //ù��° ���� �� ��ǥ�� ������ size���� ũ�� 
			cnt++; //�� ��ġ 
			pos=x[i]; //�ش� ��ġ ���� 
		}
	}
	return cnt;
}

int main(){
	int M,i,left=1,right,mid,res;
	scanf("%d %d",&N,&M);
	int *x = new int[N]; //�迭 �����Ҵ� 
	for(i=0; i<N; i++){
		scanf("%d", &x[i]);
	}
	sort(x,x+N); //��ǥ ���� 
	
	right=x[N-1];
	while(left<=right){ //�̺а˻� 
		mid=(left+right)/2;
		if(count(mid, x)>=M){ //M�������� ũ�� 
			res=mid;
			left=mid+1; //mid+1 ���� �ٽ� �ݺ� 
		} else right=mid-1; //M������ ���� ���ϸ� right�� mid-1�� �ٽ� �ݺ� 
	}
	printf("%d\n",res);
	return 0;
	
} 
