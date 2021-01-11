// 마구간 정하기 점수 100 

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int N;

int count(int size, int x[]){
	int i,cnt=1, pos=x[0];
	for(i=1; i<N; i++){
		if(x[i]-pos>=size){ //첫번째 말이 들어간 좌표를 뺐을때 size보다 크면 
			cnt++; //말 배치 
			pos=x[i]; //해당 위치 저장 
		}
	}
	return cnt;
}

int main(){
	int M,i,left=1,right,mid,res;
	scanf("%d %d",&N,&M);
	int *x = new int[N]; //배열 동적할당 
	for(i=0; i<N; i++){
		scanf("%d", &x[i]);
	}
	sort(x,x+N); //좌표 정렬 
	
	right=x[N-1];
	while(left<=right){ //이분검색 
		mid=(left+right)/2;
		if(count(mid, x)>=M){ //M마리보다 크면 
			res=mid;
			left=mid+1; //mid+1 부터 다시 반복 
		} else right=mid-1; //M마리를 넣지 못하면 right를 mid-1로 다시 반복 
	}
	printf("%d\n",res);
	return 0;
	
} 
