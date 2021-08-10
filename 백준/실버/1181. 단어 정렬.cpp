#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(string a, string b){
    if(a.length()==b.length()) return a<b; //문자열 오름차순(사전식)
    return a.length()<b.length(); //길이 오름차순
}

int main(){
    int N,len=0;
    cin>>N;
    vector<string> word;
    string input;
    
    for(int i=0; i<N; i++){
        cin>>input;
        if(find(word.begin(),word.end(), input)==word.end()){ //해당 단어가 배열에 있는지 검사
        	word.push_back(input);
		}
    }
    
    sort(word.begin(), word.end(), comp); //정렬
    
    for(int i=0; i<word.size(); i++){
        cout<<word[i]<<'\n';
    }
    
    return 0;
}
