// ���� ���� �� ���� 100 

#include <stdio.h>

int main(){
	int N,a[101],b[101],i;
	scanf("%d",&N);
	
	for(i=0; i<N; i++){
		scanf("%d",&a[i]); //A �Է� 
	}
	
	for(i=0; i<N; i++){
		scanf("%d",&b[i]); //B �Է� 
	}
	
	for(i=0; i<N; i++){
		switch(a[i]){ //switch ������ a[i]�� ���� �����صΰ� b[i]���� ���� ��� ��� 
			case 1:
				if(b[i]==1) printf("D\n");
				else if(b[i]==2) printf("B\n");
				else if(b[i]==3) printf("A\n");
				break;
			case 2:
				if(b[i]==1) printf("A\n");
				else if(b[i]==2) printf("D\n");
				else if(b[i]==3) printf("B\n");
				break;
			case 3:
				if(b[i]==1) printf("B\n");
				else if(b[i]==2) printf("A\n");
				else if(b[i]==3) printf("D\n");
				break;
		}
	}
	 
	return 0;
}
