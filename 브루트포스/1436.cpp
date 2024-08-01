#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	int count = 0;
	int result = 665;

	while (count < n) {
		result++;
		string temp = to_string(result);
		if (temp.find("666") != string::npos) {
			count++;
		}
	}

	cout << result << endl;

	return 0;
}
