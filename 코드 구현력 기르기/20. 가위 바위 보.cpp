// 가위 바위 보 점수 100 

#include <stdio.h>

int main(){
	int N,a[101],b[101],i;
	scanf("%d",&N);
	
	for(i=0; i<N; i++){
		scanf("%d",&a[i]); //A 입력 
	}
	
	for(i=0; i<N; i++){
		scanf("%d",&b[i]); //B 입력 
	}
	
	for(i=0; i<N; i++){
		switch(a[i]){ //switch 문으로 a[i]의 값을 지정해두고 b[i]값에 의해 결과 출력 
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
