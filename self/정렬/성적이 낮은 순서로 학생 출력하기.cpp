#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

struct Student{
	string name;
	int score;
		
	Student(string a, int b) {
		name=a;
		score=b;
	}
	
	bool operator <(const Student &student)const{
		return score < student.score;
	}
};

int main(){
	int N;
	cin >> N;
	string stname;
	int stscore;
	vector<Student> student;
	for(int i=0; i<N; i++){
		cin >> stname >> stscore;
		student.push_back(Student(stname, stscore));
	}
	
	sort(student.begin(),student.end());
	
	for(int i=0; i<N; i++){
		cout << student[i].name << ' ';
	}
	
	return 0;
}
