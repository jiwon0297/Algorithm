//영지 선택 : large 점수 100
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	//input
	int H,W,resh,resw,i,j,sum=0,max=-2147000000;
	scanf("%d %d",&H, &W);
	vector<vector<int> > orange(H+1, vector<int>(W+1,0));
	vector<vector<int> > dy(H+1, vector<int>(W+1,0));
	for(i=1; i<=H; i++){
		for(j=1; j<=W; j++){
			scanf("%d", &orange[i][j]);
		}
	}
	scanf("%d %d",&resh,&resw);
	
	//dynamic program
	for(i=1; i<=H; i++){
		for(j=1; j<=W; j++){
			dy[i][j]=dy[i-1][j]+dy[i][j-1]-dy[i-1][j-1]+orange[i][j]; //각 누적 값  
		}
	}
	
	for(i=resh; i<=H; i++){
		for(j=resw; j<=W; j++){
			//입력크기의 값 중 최대 구하기 
			sum=dy[i][j]-dy[i-resh][j]-dy[i][j-resw]+dy[i-resh][j-resw];  
			if(sum>max) max=sum;
		}
	}
	
	printf("%d\n", max);
	return 0;
	
} 
