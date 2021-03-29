#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

long long g(int a, int b){
    long c;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}

long long solution(int w,int h) {
    long long answer = 1;
    long long W=w;
    long long H=h;
    answer = (W*H)-((W+H)-g(W,H));
    return answer;
}
