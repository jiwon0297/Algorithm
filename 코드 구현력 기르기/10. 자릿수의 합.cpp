// �ڸ����� �� ���� 100 

#include <stdio.h>

int digit_sum(int x){
	int temp, sum=0;
	while(x>0){ //10���� ��� �����鼭 �ڸ��� ���ϱ� 
		temp=x%10;
		sum=sum+temp;
		x=x/10;
	}
	
	return sum;
} 

int main(){
	int N, num, i, sum, max=-2147000000, res;
	scanf("%d", &N);
	
	for(i=0; i<N; i++) {
		scanf("%d", &num);
		sum=digit_sum(num);
		
		if(sum>max){ //�ڸ��� �ִ밪 ���ϰ� �ش� num ���� result�� �Է� 
			max=sum;
			res=num;
		} else if(sum==max){ //������ sum�� ���� max�� ���� �� 
			if(num>res) res=num; //���� res�� �ش� num �߿� ū ���� result 
		}
	}
	
	printf("%d\n",res); //result ��� 
	
	return 0;
}

