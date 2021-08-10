#include <iostream>
using namespace std;

int main(){
    int X, res=0;
    cin>>X;
    
    while(X>0){
        if(X%2==1) res++;
        X=X/2;
    }
    
    cout<<res;
}
