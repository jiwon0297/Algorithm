//����Ʈ�� ���̿켱Ž��(DFS)
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

void rec(int N){ //dfs ����Լ� 
	if(N>7) return;
	else{
		/* printf("%d ",N); ������ȸ */
		rec(N*2); //���� �ڽĳ��
		/* printf("%d ",N); ������ȸ */ 
		rec(N*2+1); //������ �ڽĳ�� 
		/* printf("%d ",N); ������ȸ */
	}
}

int main(){ 
	rec(1); //����Ʈ�� ���� 
	return 0;
} 
