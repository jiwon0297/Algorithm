#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, a[51], res=0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>a[i];
    }
    
    sort(a,a+N);
    
    if(N==1) res=a[0]*a[0]; //9처럼 제곱수일때
    else res=a[0]*a[N-1]; //나머지
    
    cout<<res;
}
