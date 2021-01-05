//3등의 성적은? 점수 100

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
	
	for(i=0; i<N-1; i++){ //내림차순으로 선택정렬 
		idx=i;
		for(j=i+1; j<N; j++){
			if(score[j]>score[idx]) idx=j;
		}
		temp=score[i];
		score[i]=score[idx];
		score[idx]=temp;
	}
	
	for(i=1; i<N; i++){
		if(score[i-1]!=score[i]) { //i번째 값과 그 앞의 값이 동일하지 않을때  
			cnt++;  //cnt++
			if(cnt==2) printf("%d",score[i]); //그 중 cnt==2 (세번째) 일때 값 출력 
		}
	}
	
	return 0;
}

