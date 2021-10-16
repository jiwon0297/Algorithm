#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
	int Wlen,Slen,cnt=0;
	cin>>Wlen>>Slen;
	string W,S;
	cin>>W>>S;
	
	unordered_map<char, int> mp; //W에 포함된 알파벳을 저장
	unordered_map<char, int> mp2; //탐색 과정 중 W에 포함되지 않은 단어를 저장  
	for(int i=0; i<W.size(); i++) mp[W[i]]++;
	
	//탐색 
	bool ch=true; //문자열 S에 W의 조합이 존재하는지 판단하는 변수
	for(int i=0; i<Wlen; i++){ // 문자열 W에 있는 단어와 동일한 단어가 있는지 판단
		if(mp.find(S[i])!=mp.end()) mp[S[i]]--; //있으면 mp에서 해당 단어 값 감소 
		else mp2[S[i]]++; //새로운 문자 등장 mp2에 해당 문자 저장 
	} //mp와 mp2에 저장된 key 값의 value가 모두 '0'이어야 S안에 W의 조합이 있음을 나타냄 
	
	for(auto[k,v] : mp) {
		if(v!=0) {
			ch=false;
			break;
		}
	} //value 값이 0이 아닌경우 곧바로 반복문 종료
	if(ch){
		for(auto[k,v] : mp2){
			if(v!=0) ch=false;
			break;
		}
	} //value 값이 0이 아닌경우 곧바로 반복문 종료 
	
	if(ch) cnt++; //ch가 true인 경우 => 모든 값이 0이라는 뜻 => cnt++ 
	
	//슬라이딩 윈도우 활용하여 탐색 
	int left=0, right=Wlen-1;	
	while(Wlen<Slen && right<Slen){
		ch=true;
		if(mp.find(S[left])!=mp.end()) mp[S[left]]++; //left값 초기화, left++
		//s[left] 값이 mp에 저장되어있다면 기존에 -1해주었던 값을 ++ 
		else mp2[S[left]]--;
		//mp2에 저장되어 있으면 mp2에 해당 값을 -1 
		left++;
		right++;
		
		if(mp.find(S[right])!=mp.end()) mp[S[right]]--; //새로 추가된 right 위치의 값을 업데이트하는 과정 
		//mp에 해당 값이 있다면-1, 아니면 mp2에 값 추가 
		else mp2[S[right]]++;
		
		//모든 key 값의 value가 0인지 판단 
		for(auto[k,v] : mp) {
			if(v!=0){
				ch=false;
				break;
			}
		}
		if(ch){
			for(auto[k,v] : mp2){
				if(v!=0){
					ch=false;
					break;
				}
			}
		}
		
		//모두 0이면 cnt++ 
		if(ch) cnt++;
	}
	
	cout<<cnt<<endl;
}

