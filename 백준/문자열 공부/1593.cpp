#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
	int Wlen,Slen,cnt=0;
	cin>>Wlen>>Slen;
	string W,S;
	cin>>W>>S;
	
	unordered_map<char, int> mp; //W�� ���Ե� ���ĺ��� ����
	unordered_map<char, int> mp2; //Ž�� ���� �� W�� ���Ե��� ���� �ܾ ����  
	for(int i=0; i<W.size(); i++) mp[W[i]]++;
	
	//Ž�� 
	bool ch=true; //���ڿ� S�� W�� ������ �����ϴ��� �Ǵ��ϴ� ����
	for(int i=0; i<Wlen; i++){ // ���ڿ� W�� �ִ� �ܾ�� ������ �ܾ �ִ��� �Ǵ�
		if(mp.find(S[i])!=mp.end()) mp[S[i]]--; //������ mp���� �ش� �ܾ� �� ���� 
		else mp2[S[i]]++; //���ο� ���� ���� mp2�� �ش� ���� ���� 
	} //mp�� mp2�� ����� key ���� value�� ��� '0'�̾�� S�ȿ� W�� ������ ������ ��Ÿ�� 
	
	for(auto[k,v] : mp) {
		if(v!=0) {
			ch=false;
			break;
		}
	} //value ���� 0�� �ƴѰ�� ��ٷ� �ݺ��� ����
	if(ch){
		for(auto[k,v] : mp2){
			if(v!=0) ch=false;
			break;
		}
	} //value ���� 0�� �ƴѰ�� ��ٷ� �ݺ��� ���� 
	
	if(ch) cnt++; //ch�� true�� ��� => ��� ���� 0�̶�� �� => cnt++ 
	
	//�����̵� ������ Ȱ���Ͽ� Ž�� 
	int left=0, right=Wlen-1;	
	while(Wlen<Slen && right<Slen){
		ch=true;
		if(mp.find(S[left])!=mp.end()) mp[S[left]]++; //left�� �ʱ�ȭ, left++
		//s[left] ���� mp�� ����Ǿ��ִٸ� ������ -1���־��� ���� ++ 
		else mp2[S[left]]--;
		//mp2�� ����Ǿ� ������ mp2�� �ش� ���� -1 
		left++;
		right++;
		
		if(mp.find(S[right])!=mp.end()) mp[S[right]]--; //���� �߰��� right ��ġ�� ���� ������Ʈ�ϴ� ���� 
		//mp�� �ش� ���� �ִٸ�-1, �ƴϸ� mp2�� �� �߰� 
		else mp2[S[right]]++;
		
		//��� key ���� value�� 0���� �Ǵ� 
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
		
		//��� 0�̸� cnt++ 
		if(ch) cnt++;
	}
	
	cout<<cnt<<endl;
}

