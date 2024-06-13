#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<string> v;

	while (true) {
		int a, b;
		cin >> a >> b;

		if (a == 0 && b == 0) {
			break;
		}

		if (b % a == 0) {
			v.push_back("factor");
		}
		else if (a % b == 0) {
			v.push_back("multiple");
		}
		else {
			v.push_back("neither");
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}
	
	return 0;
}
