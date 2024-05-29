#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t;
	string str;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> str;
		cout << str.front() << str.back() << "\n";
	}

	return 0;
}
