//���� ���� : small ����100
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	//input
	int H,W,resh,resw,i,j,k,s,sum=0,max=-2147000000;
	scanf("%d %d",&H, &W);
	vector<vector<int> > orange(H+1, vector<int>(W+1,0));
	for(i=1; i<=H; i++){
		for(j=1; j<=W; j++){
			scanf("%d", &orange[i][j]);
		}
	}
	scanf("%d %d",&resh,&resw);
	
	//code
	for(i=1; i<=H-resh+1; i++){
		for(j=1; j<=W-resw+1; j++){
			sum=0;
			for(k=i; k<i+resh; k++){ //�׸� ũ�⸸ŭ �� ���ϰ� 
				for(s=j; s<j+resw; s++){
					sum+=orange[k][s];
				}
			}
			if(sum>max) max=sum; //�ش� ���� �ִ��ΰ��� ��� 
		}
	}
	printf("%d\n", max);
	return 0;
	
} 
