// �µ��� �ִ밪 100�� 

#include <stdio.h>
#include <vector> 
using namespace std;
int main(){
	int N, K, i, j, sum=0,max;
	scanf("%d %d",&N, &K);
	vector<int> tem(N);
	
	for(i=0; i<N; i++){
		scanf("%d",&tem[i]); //�Է� 
	} 
	
	for(i=0; i<K; i++){
		sum+=tem[i]; 
	}
	max=sum;
	for(i=K; i<N; i++){ //sum�� i-k��°�� ���� ���� i��° ���� ���ϸ� �� ���� sum�� �� 
		sum=sum+(tem[i]-tem[i-K]);
		if(sum>max) max=sum;
	}
	
	printf("%d\n", max);
	return 0;
}
