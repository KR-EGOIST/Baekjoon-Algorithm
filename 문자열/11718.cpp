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
