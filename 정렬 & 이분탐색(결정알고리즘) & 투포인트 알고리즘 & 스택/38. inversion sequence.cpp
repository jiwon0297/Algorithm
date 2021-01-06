//inversion sequence 점수 100

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
		if(pos==0) ans[i]=tmp; //0이면 그대로 넣기 
		else {
			ans[i]=tmp;
			for(j=i; j<i+pos; j++){ //i 부터 pos 갯수만 
				ans[j]=ans[j+1];
				ans[j+1]=tmp; //앞으로 땡겨주고 그 뒤에 tmp 값 넣어줌 
			}
		}
	}
	
	for(i=0; i<N; i++){
		printf("%d ",ans[i]);
	}
	
	return 0; 
}
