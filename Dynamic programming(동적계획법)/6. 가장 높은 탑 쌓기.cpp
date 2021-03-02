//���� ���� ž �ױ�
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

struct block{ //���� ����ü ���� 
	int s, h, w;
	block(int a, int b, int c){
		s=a, h=b, w=c;
	}
	
	bool operator<(const block &b)const{
		return s>b.s;
	}
};

int main(){
	int N,i,j,a,b,c,max_h=0,res;
	//input
	scanf("%d",&N);
	vector<block> blocks;
	vector<int> dy(N);
	for(i=0; i<N; i++){
		scanf("%d %d %d",&a,&b,&c);
		blocks.push_back(block(a,b,c));
	}
	
	sort(blocks.begin(),blocks.end()); //�س��̷� �������� ���� 
	dy[0]=blocks[0].h; //dy[0] ���� 0���� ���̷� 
	res=dy[0];
	
	//dp
	for(i=1; i<N; i++){
		max_h=0;
		for(j=i-1; j>=0; j--){
			//���̰� ũ�� ���̰� �ִ��� �� 
			if(blocks[j].w>blocks[i].w && dy[j]>max_h){
				max_h=dy[j];
			}
		}
		dy[i]=max_h+blocks[i].h; //�� �ִ밪�� �ڽ��� ���� ���� 
		if(res<dy[i]) res=dy[i]; //dy[] �� ���� ū �� 
	}
	//output
	printf("%d\n",res);
	return 0;
}
