//각 행의 평균과 가장 가까운 값 점수 100 
#include<stdio.h>
#include<vector>
#include<cmath>
using namespace std;

int main(){
	int i,j,sum=0, diff=0, min=2147000000,res, k, avg;
	vector<vector<int> > a(9, vector<int>(9,0)); //2차원배열 동적할당 
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			scanf("%d",&a[i][j]); //input 
		}
	}
	
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			sum+=a[i][j]; //한 줄의 sum 구하기 
			if(j==8){
				avg=round((double)sum/(double)9); //실수로 나눠서 반올림 해주기 
				for(k=0; k<9; k++){
					diff=a[i][k]-avg; //각 숫자와 평균값 사이의 차를 구하고 
					if(abs(min)>abs(diff)){ //비교하여 최소값 구하기 
						min=diff;
						res=a[i][k]; //해당 최소값을 갖는 숫자 res에 저장 
					}
				}
				printf("%d %d\n",avg,res); //평균과 res 출력 
				sum=0; //sum 초기화 
				min=2147000000; //min 초기화 
			}
		}
	} 
	
	return 0;
} 
