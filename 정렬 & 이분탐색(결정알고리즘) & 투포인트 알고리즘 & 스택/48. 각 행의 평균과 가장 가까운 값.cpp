//�� ���� ��հ� ���� ����� �� ���� 100 
#include<stdio.h>
#include<vector>
#include<cmath>
using namespace std;

int main(){
	int i,j,sum=0, diff=0, min=2147000000,res, k, avg;
	vector<vector<int> > a(9, vector<int>(9,0)); //2�����迭 �����Ҵ� 
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			scanf("%d",&a[i][j]); //input 
		}
	}
	
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			sum+=a[i][j]; //�� ���� sum ���ϱ� 
			if(j==8){
				avg=round((double)sum/(double)9); //�Ǽ��� ������ �ݿø� ���ֱ� 
				for(k=0; k<9; k++){
					diff=a[i][k]-avg; //�� ���ڿ� ��հ� ������ ���� ���ϰ� 
					if(abs(min)>abs(diff)){ //���Ͽ� �ּҰ� ���ϱ� 
						min=diff;
						res=a[i][k]; //�ش� �ּҰ��� ���� ���� res�� ���� 
					}
				}
				printf("%d %d\n",avg,res); //��հ� res ��� 
				sum=0; //sum �ʱ�ȭ 
				min=2147000000; //min �ʱ�ȭ 
			}
		}
	} 
	
	return 0;
} 
