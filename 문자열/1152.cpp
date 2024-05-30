/*
stringstream 이란?

문자열에서 동작하는 스트림 클래스이다.(즉 외부에서 입력과 출력으로 받는 것이 아니라 string type을 받아 동작한다.)
문자열에서 내가 원하는 자료형의 데이터를 추출할 때 사용한다.
#include<sstream>을 선언하고 사용해야한다.
*/

#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	
	string str;
	getline(cin, str);

	vector<string> vstr;
	stringstream stream(str);
	string s;
  
  	//뽑아내고자 하는 string type을 출력한다.(s가 string type이기 때문에) 공백이나 \n이 나올때 까지 읽어드린 후 출력
	while (stream >> s) {
		vstr.push_back(s);
	}

	cout << vstr.size() << "\n";

	return 0;
}
