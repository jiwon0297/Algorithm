#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool dsc(int a, int b){
	return a>b;
}

bool asc(int a, int b){
	return a<b;
}

int main(){
	int N, K, temp, sum=0;
	cin >> N >> K;
	vector<int> a(N), b(N);
	for(int i=0; i<N; i++){
		cin >> a[i];
	}
	for(int i=0; i<N; i++){
		cin >> b[i];
	}
	
	sort(a.begin(),a.end(),asc);
	sort(b.begin(),b.end(),dsc);
	
	for(int i=0; i<K; i++){
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	
	for(int i=0; i<N; i++){
		sum+=a[i];
	}
	
	cout << sum << endl;
}
