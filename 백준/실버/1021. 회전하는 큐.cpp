#include<iostream>
#include<deque>
using namespace std;

int main(){
    int N,find,num,idx,cnt=0;
    deque<int> dq;
    
    cin>>N;
    cin>>find;
    
    for(int i=1; i<=N; i++){
        dq.push_back(i);
    }
    
    for(int i=0; i<find; i++){
        cin>>num;
        
        for(int i=0; i<dq.size(); ++i){
            if(dq[i]==num){
                idx=i;
                break;
            }
        }
        
        if(idx<dq.size()-idx){ //�տ� ���� ��
            while(1){
                if(dq.front()==num){
                    dq.pop_front();
                    break;
                }
                ++cnt;
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else{ //�ڿ� ���� ��
            while(1){
                if(dq.front()==num){
                    dq.pop_front();
                    break;
                }
                ++cnt;
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    cout<<cnt<<endl;
 }
