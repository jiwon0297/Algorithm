//Least Recently Used ���� 100

#include<stdio.h>
#include<vector>
using namespace std;

int main(){
	int S, N, i, j, pos;
	scanf("%d %d",&S, &N);
	
	vector<int> num(N), cache(S); //�迭 �ʱ�ȭ 
	
	for(i=0; i<N; i++){
		scanf("%d",&num[i]); //num input
	}
	
	for(i=0; i<N; i++){
		pos=-1;
		for(j=0; j<S; j++){
			if(cache[j]==num[i]) pos=j; //cash �ȿ� num�� �ִ��� Ȯ��, ������ �ش� position ���� 
		}
		if(pos==-1){ //cachemiss
			for(j=S-1; j>=1; j--){ //�ǳ����� ���� 
				cache[j]=cache[j-1]; //�����ֱ� 
			}
			cache[0]=num[i]; //���� �׻� �� �տ��� �־��� 
		} 
		else { //cachehit
			for(j=pos; j>=1; j--){ //������ ���� ��ġ���� ���� 
				cache[j]=cache[j-1]; //�����ֱ� 
			}
			cache[0]=num[i]; //���� �� �տ� �־��� 
		}
	}
	
	for(i=0; i<S; i++){
		printf("%d ",cache[i]); //output
	}
	
}
