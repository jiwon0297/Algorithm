//�ִ�κ� �������� 
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
				if(dy[j]>max1) max1=dy[j]; //���� ���� dy�� max 
			}
		}
		dy[i]=max1+1; //�ִ� dy���� 1���� 
		if(dy[i]>max2) max2=dy[i]; //���� �� �������� 
	}
	printf("%d\n",max2); //output
	
	return 0;
}
