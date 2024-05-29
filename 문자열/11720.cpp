/*
char -> int
/* 문자에 숫자가 있을 때 int로 변환 */
c - '0';
*/

#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	string str;
	cin >> n >> str;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += str[i] - '0';
	}

	cout << sum << "\n";

	return 0;
}
