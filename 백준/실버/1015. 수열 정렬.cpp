#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N,num;
    cin>>N;
    vector<pair<int, int> > a(N);
    vector<int> p(N);
    
    for(int i=0; i<N; i++){
        cin>>num;
        a[i]=make_pair(num,i);
    }
    
    sort(a.begin(), a.end()); //num의 오름차순으로 벡터 정렬 
    
    for(int i=0; i<N; i++) {
    	p[a[i].second]=i; //p 배열 생성 
    }
    
    for(int i=0; i<N; i++){
    	cout<<p[i]<<" "; //출력 
	}
	
	return 0;
}
