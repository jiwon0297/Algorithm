#include <iostream>
#include <algorithm> 
using namespace std;

int chess[51][51];

int check(int x, int y){
	int cnt1=0;
	int cnt2=0;
	
	for(int i=x; i<x+8; i++){
		for(int j=y; j<y+8; j++){
			if((i+j)%2==chess[i][j]) cnt1++; //���� ����� W�϶� 
			if((i+j+1)%2==chess[i][j]) cnt2++; //���� ����� B�϶� 
		}
	}
	return min(cnt1, cnt2); //�ּҰ� ��ȯ 
} 

int main(){
	int N,M,res=2147000000;
	char color;
    cin >> N >> M;
    
    for(int i=0; i<N; i++){ //�Է¹ޱ�:B�̸� 0 W�̸� 1 
    	for(int j=0; j<M; j++){
    		cin>>color;
    		if(color=='B') chess[i][j]=0;
    		else chess[i][j]=1;
		}
	}
    
    for(int i=0; i<=N-8; i++){
    	for(int j=0; j<=M-8; j++){ //check�Լ��� Ž�� ���� �ε��� ���� 
    		if(res>check(i,j)) res=check(i,j); //�ּҰ� ���ϱ� 
		}
	}
	
	cout<<res<<endl;
}
