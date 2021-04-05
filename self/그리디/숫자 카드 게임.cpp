#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N, M, maxx=-2147000000, minn, num;
	scanf("%d %d",&N, &M);

	for(int i=0; i<N; i++){
		minn=2147000000;
		for(int j=0; j<M; j++){
			scanf("%d",&num);
			if(num<minn) minn=num;
		}
		if(minn>maxx) maxx=minn;
	}
	
	printf("%d",maxx);
	return 0;
}
