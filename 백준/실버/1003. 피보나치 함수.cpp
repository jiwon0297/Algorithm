#include<iostream>
using namespace std;

int fiboarr[50]={0, 1, };

int fibo(int n){
    if(n==0 || n==1) return fiboarr[n];
    else if(fiboarr[n]==0) fiboarr[n]=fibo(n-1)+fibo(n-2); //메모이제이션
    return fiboarr[n];
}

int main(){
    int T, N;
    cin>>T;
    
    for(int i=0; i<T; i++){
        cin>>N;
        
        if(N==0) cout<<"1 0"<<'\n';
        else cout<<fibo(N-1)<<' '<<fibo(N)<<'\n';
    }
    
    return 0;
}
