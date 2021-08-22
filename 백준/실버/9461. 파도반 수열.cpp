#include<iostream>
using namespace std;

long long p[101]={0,1,1,1,};
int main(){
    int T, N;
    cin>>T;
    
    for(int i=0; i<T; i++){
        cin>>N;
        
        for(int i=4; i<=N; i++){
        	p[i]=p[i-2]+p[i-3];
		}
		
        cout<<p[N]<<endl;
    }
}
