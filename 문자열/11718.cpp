/*
>> 연산자의 반환 값을 이용

1. >> 연산자는 stream으로 부터 값을 읽어서 타겟 변수(cin)에 값을 반환한다.
2. 이 때 stream에서 읽은 값이 타겟 변수의 type이 아니라면, stream은 invalid 상태로 mark된다.
3. >> 연산자가 stream의 참조값(reference)을 cin에 반환하면, cin은 자신이 상속하는 istream 클래스의 explicit operator bool()로 인해 valid 상태의 stream은 true로, invalid 상태의 stream은 false로 변환하여 반환한다.
즉, 주석에 써놓은 것처럼, cin >> (변수)는 입력값으로 잘못된 값(자료형 불일치)이 들어오면 false를 반환한다는 얘기다.

*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	string s;

	while (1) {
		getline(cin, s);
		if (cin.eof()) {
			break;
		}
		else {
			cout << s << "\n";
		}
	}

	return 0;
}

//====================================

	while (getline(cin, s)) {
		cout << s << "\n";
	}
