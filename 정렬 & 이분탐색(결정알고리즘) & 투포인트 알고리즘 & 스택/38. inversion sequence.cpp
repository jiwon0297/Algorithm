//inversion sequence ���� 100

#include<stdio.h>
#include<vector> 
using namespace std;

int main(){
	int N,i,j,pos,tmp;
	scanf("%d", &N);
	vector<int> num(N), ans(N);
	
	for(i=0; i<N; i++){
		scanf("%d", &num[i]);
	}
	
	for(i=N-1; i>=0; i--){
		pos=num[i];
		tmp=i+1;
		if(pos==0) ans[i]=tmp; //0�̸� �״�� �ֱ� 
		else {
			ans[i]=tmp;
			for(j=i; j<i+pos; j++){ //i ���� pos ������ 
				ans[j]=ans[j+1];
				ans[j+1]=tmp; //������ �����ְ� �� �ڿ� tmp �� �־��� 
			}
		}
	}
	
	for(i=0; i<N; i++){
		printf("%d ",ans[i]);
	}
	
	return 0; 
}
