//최대부분 증가수열 
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int N,i,j,max1=0,max2=0;
	//input 
	scanf("%d",&N);
	vector<int> num(N+1),dy(N+1);
	
	for(i=1; i<=N; i++){
		scanf("%d",&num[i]);
	}
	
	dy[1]=1;
	for(i=2; i<=N; i++){
		max1=0;
		for(j=i-1; j>=1; j--){
			if(num[j]<num[i]){
				if(dy[j]>max1) max1=dy[j]; //작은 값중 dy의 max 
			}
		}
		dy[i]=max1+1; //최대 dy값에 1더함 
		if(dy[i]>max2) max2=dy[i]; //가장 긴 증가수열 
	}
	printf("%d\n",max2); //output
	
	return 0;
}
