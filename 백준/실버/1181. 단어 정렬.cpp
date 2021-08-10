#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(string a, string b){
    if(a.length()==b.length()) return a<b; //���ڿ� ��������(������)
    return a.length()<b.length(); //���� ��������
}

int main(){
    int N,len=0;
    cin>>N;
    vector<string> word;
    string input;
    
    for(int i=0; i<N; i++){
        cin>>input;
        if(find(word.begin(),word.end(), input)==word.end()){ //�ش� �ܾ �迭�� �ִ��� �˻�
        	word.push_back(input);
		}
    }
    
    sort(word.begin(), word.end(), comp); //����
    
    for(int i=0; i<word.size(); i++){
        cout<<word[i]<<'\n';
    }
    
    return 0;
}
