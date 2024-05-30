#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> alpha(26);

	string s;
	getline(cin, s);
	transform(s.begin(), s.end(), s.begin(), ::toupper);

	for (int i = 0; i < s.length(); i++)
	{
		alpha[s[i] - 'A']++;
	}
	
	int max = *max_element(alpha.begin(), alpha.end());
	size_t maxIdx = max_element(alpha.begin(), alpha.end()) - alpha.begin();

	if (count(alpha.begin(), alpha.end(), max) == 1) {
		cout << (char)(maxIdx + 'A') << "\n";
	}
	else {
		cout << "?" << "\n";
	}

	return 0;
}
