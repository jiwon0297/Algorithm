//3���� ������? ���� 100

#include<stdio.h>
#include<vector>
using namespace std; 

int main(){
	int N, i, j, idx, temp, cnt;
	scanf("%d", &N);
	
	vector<int> score(N);
	
	for(i=0; i<N; i++){
		scanf("%d", &score[i]);
	}
	
	for(i=0; i<N-1; i++){ //������������ �������� 
		idx=i;
		for(j=i+1; j<N; j++){
			if(score[j]>score[idx]) idx=j;
		}
		temp=score[i];
		score[i]=score[idx];
		score[idx]=temp;
	}
	
	for(i=1; i<N; i++){
		if(score[i-1]!=score[i]) { //i��° ���� �� ���� ���� �������� ������  
			cnt++;  //cnt++
			if(cnt==2) printf("%d",score[i]); //�� �� cnt==2 (����°) �϶� �� ��� 
		}
	}
	
	return 0;
}

