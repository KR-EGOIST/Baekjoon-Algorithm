#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string str;
	cin >> str;

	int n;
	cin >> n;
	cout << str[n - 1] << "\n";

	return 0;
}
