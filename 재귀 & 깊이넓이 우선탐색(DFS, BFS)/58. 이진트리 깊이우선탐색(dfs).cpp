//이진트리 깊이우선탐색(DFS)
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

void rec(int N){ //dfs 재귀함수 
	if(N>7) return;
	else{
		/* printf("%d ",N); 전위순회 */
		rec(N*2); //왼쪽 자식노드
		/* printf("%d ",N); 중위순회 */ 
		rec(N*2+1); //오른쪽 자식노드 
		/* printf("%d ",N); 후위순회 */
	}
}

int main(){ 
	rec(1); //이진트리 제작 
	return 0;
} 
