#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;

bool ismul(int a){ //제곱수 판별 함수 
	int root = (int)sqrt(a);
	if(root*root==a) return true;
	else return false;
}

int main(){
	int N,M,num[10][10];
	int i,j,k,l,a,b,now,ans=-1;
	cin >> N >> M;
	string tmp="";
	for(i=1; i<=N; i++){
		cin >> tmp; //string 입력 
		for(j=1; j<=M; j++){
			num[i][j]=(int)tmp[j-1]-48; //string 한자리 수 배열에 input 
		}
	}
	
	for(i=1; i<=N; i++){
		for(j=1; j<=M; j++){
			for(k=-N; k<N; k++){ //행의 등차값 
				for(l=-M; l<M; l++){ //열의 등차값  
					if(k==0 && l==0) continue;
					a=i;
					b=j;
					now=0;
					while(a>0 && a<=N && b>0 && b<=M){ //탐색 
						now *= 10;
						now += num[a][b];
						if(ismul(now)) ans=max(ans,now);
						a+=k;
						b+=l;
					}
					if(ismul(now)) ans=max(ans,now); //제곱수들 중 큰 값 
				}
			}
		}
	}
	cout << ans << endl; 
}
