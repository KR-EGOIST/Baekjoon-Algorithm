/*
<string> string.find()

#include <string>
string str;
str.find(value);

문자열 내에서 value 값을 찾는다.
문자열 내에 value와 일치하는 값이 있다면 value의 첫번째 인덱스를 반환한다.
일치하는 값이 없다면 string::npos(== 쓰레기 값)를 반환한다.
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string call;
	getline(cin, call);

	vector<string> dial = { "", "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };

	int sec = 0;
	for (int i = 0; i < call.length(); i++)
	{
		for (int j = 0; j < dial.size(); j++)
		{
			if (dial[j].find(call[i]) != string::npos) {
				sec += j;
			}
		}
	}

	cout << sec << "\n";

	return 0;
}
