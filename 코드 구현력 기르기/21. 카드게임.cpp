// 카드게임 점수 100 

#include <stdio.h>

int main(){
	
	int A[10], B[10], i, asc=0, bsc=0, win=0;
	
	for(i=0; i<10; i++){
		scanf("%d",&A[i]); //A 카드 입력 
	} 
	
	for(i=0; i<10; i++){
		scanf("%d",&B[i]); //B 카드 입력 
	} 
	
	for(i=0; i<10; i++){ //각 라운드의 점수 계산 
		if(A[i]>B[i]) {
			asc+=3;
			win=1;
		}
		else if(A[i]<B[i]) {
			bsc+=3;
			win=2;
		}
		else{
			asc+=1;
			bsc+=1;
		}
	}
	
	printf("%d %d\n",asc,bsc); //점수 출력 
	
	if(asc>bsc) printf("A"); //점수에 따른 승자 출력 
	else if(asc<bsc) printf("B");
	else { //점수가 동점일 때 
		if(win==1) printf("A"); //win 값에 따라 승자 출력 (마지막 승자) 
		else if(win==2) printf("B");
		else printf("D");
	}
	
	return 0;
}
