//병합정렬 
#include<stdio.h>

int data[10], temp[10];

void divide(int lt, int rt){
	int mid;
	int p1, p2, p3;
	if(lt<rt){
		mid=(lt+rt)/2;
		divide(lt, mid);
		divide(mid+1, rt);
		//후위순회 - 배열합치기 
		p1=lt;
		p2=mid+1;
		p3=lt;
		while(p1<=mid && p2<=rt){
			if(data[p1]<data[p2]) temp[p3++]=data[p1++];
			else temp[p3++]=data[p2++];
		}
		while(p1<=mid) temp[p3++]=data[p1++];
		while(p2<=rt) temp[p3++]=data[p2++];
		for(int i=lt; i<=rt; i++){
			data[i]=temp[i];
		}
	}
}

int main(){
	//input
	int N, i;
	scanf("%d",&N);
	for(i=1; i<=N; i++){
		scanf("%d", &data[i]);
	}
	divide(1,N); //함수호출
	//output 
	for(i=1; i<=N; i++){
		printf("%d ", data[i]);
	}
	
	return 0;
}
