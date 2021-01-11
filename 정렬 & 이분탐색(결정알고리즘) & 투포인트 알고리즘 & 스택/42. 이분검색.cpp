//�̺а˻�

#include<stdio.h>
#include<vector> 
#include<algorithm>
using namespace std;

int main(){
	int N, M, left=0, right, mid, i;
	scanf("%d %d",&N, &M);
	vector<int> a(N);
	for(i=0; i<N; i++){
		scanf("%d",&a[i]); //�迭 �Է� 
	}
	sort(a.begin(), a.end()); //�迭 �������� ���� 
	
	right=N-1;
		
	while(left<=right){ 
		mid=(left+right)/2;
		if(a[mid]==M) {
			printf("%d\n",mid+1);
			return 0;
		} else if(a[mid]>M) right=mid-1; //mid ��° ���� �� ũ�� mid-1����
		else if(a[mid]<M) left=mid+1; //mid ��° ���� ������ mid+1����
	} 
	
	return 0;
}
