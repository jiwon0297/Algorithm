// ī����� ���� 100 

#include <stdio.h>

int main(){
	
	int A[10], B[10], i, asc=0, bsc=0, win=0;
	
	for(i=0; i<10; i++){
		scanf("%d",&A[i]); //A ī�� �Է� 
	} 
	
	for(i=0; i<10; i++){
		scanf("%d",&B[i]); //B ī�� �Է� 
	} 
	
	for(i=0; i<10; i++){ //�� ������ ���� ��� 
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
	
	printf("%d %d\n",asc,bsc); //���� ��� 
	
	if(asc>bsc) printf("A"); //������ ���� ���� ��� 
	else if(asc<bsc) printf("B");
	else { //������ ������ �� 
		if(win==1) printf("A"); //win ���� ���� ���� ��� (������ ����) 
		else if(win==2) printf("B");
		else printf("D");
	}
	
	return 0;
}
