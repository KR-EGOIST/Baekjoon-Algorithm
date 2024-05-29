/*
C++ string 변수에서 특정 문자열을 찾을 때, std::string의 find() 함수를 사용한다.

size_t 는 unsigned long type

인덱스 번째 부터 문자를 찾는다.
s.find('문자', 인덱스);

찾고자 하는 문자열이 없을 때,  -1이 반환되는것이 아니라 쓰레기값이 반환된다.
즉, string::npos를 반환한다.
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string str;
	cin >> str;

	for (char i = 'a'; i <= 'z'; i++)
	{
		size_t index = str.find(i);

		if (index != string::npos) {
			cout << index << " ";
		}
		else {
			cout << -1 << " ";
		}
	}
	cout << "\n";

	return 0;
}
