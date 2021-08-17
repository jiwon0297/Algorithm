#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int N, dis, res, dr1, dr2;
    int x1, x2, y1, y2, r1, r2;

    cin>>N;
    for(int i=0; i<N; i++){
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        
        dis=(x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        
        dr1=(r2-r1)*(r2-r1);
        dr2=(r1+r2)*(r1+r2);
        
        if(dis<dr2 && dis>dr1) res=2;
        else if(dis==dr2 || (dis==dr1 && dis!=0)) res=1;
        else if(dis<dr1 || dis>dr2) res=0;
        else if(dis==0){
        	if(r1==r2) res=-1;
        	else res=0;
		}
        
        cout<<res<<'\n';
    }
    return 0;
}
