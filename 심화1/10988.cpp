#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	string str;
	getline(cin, str);

	string temp;
	temp = str;

	reverse(str.begin(), str.end());

	if (str == temp) {
		cout << 1 << "\n";
	}
	else {
		cout << 0 << "\n";
	}

	return 0;
}
