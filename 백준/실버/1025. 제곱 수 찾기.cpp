#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;

bool ismul(int a){ //������ �Ǻ� �Լ� 
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
		cin >> tmp; //string �Է� 
		for(j=1; j<=M; j++){
			num[i][j]=(int)tmp[j-1]-48; //string ���ڸ� �� �迭�� input 
		}
	}
	
	for(i=1; i<=N; i++){
		for(j=1; j<=M; j++){
			for(k=-N; k<N; k++){ //���� ������ 
				for(l=-M; l<M; l++){ //���� ������  
					if(k==0 && l==0) continue;
					a=i;
					b=j;
					now=0;
					while(a>0 && a<=N && b>0 && b<=M){ //Ž�� 
						now *= 10;
						now += num[a][b];
						if(ismul(now)) ans=max(ans,now);
						a+=k;
						b+=l;
					}
					if(ismul(now)) ans=max(ans,now); //�������� �� ū �� 
				}
			}
		}
	}
	cout << ans << endl; 
}
