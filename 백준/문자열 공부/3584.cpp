#include<iostream>
#include<string>
using namespace std;

int parent[10001], visit[10001];

int main(){
	int T,N,A,B,C,D;
	cin>>T;

	for(int i=0; i<T; i++){
		cin>>N;
		
		//�ʱ�ȭ 
		for(int j=1; j<=N; j++){
			visit[j]=0;
			parent[j]=j;
		}
		
		for(int j=0; j<N-1; j++){
			cin>>A>>B;
			parent[B]=A;
		}
		
		cin>>C>>D;
		visit[C]=1;
		
		//C ������� �湮�ϸ� ã�� 
		while(C!=parent[C]){
			C=parent[C];
			visit[C]=1;
		}
		
		while(true){
			if(visit[D]){ //V�� �̹� visit üũ �Ǿ������� u�� ������� ���� 
				cout<<D<<endl;
				break; //���� ���� ������ ã���Ƿ� �ٷ� �ݺ��� �������� 
			}
			D=parent[D]; //�湮 �������� �θ� ã�� 
		}
	
	
	}
}
