/*
string -> int
/* 문자열이 숫자일 때 int로 변환 */
stoi(str);

char -> int
/* 문자 -> 숫자 (아스키코드) */
atoi(c);
/* 문자에 숫자가 있을 때 int로 변환 */
c - '0';

int -> char
(char)num;
*/

#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char c;
	cin >> c;

	cout << (int)c << "\n";

	return 0;
}
