#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<string> v;
	string s;

	int len = -1;
	for (int i = 0; i < 5; i++)
	{
		cin >> s;
		len = max(len, (int)s.length());
		v.push_back(s);
	}

	string result = "";
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i < v[j].size()) {
				result += v[j][i];
			}
		}
	}

	cout << result;

	return 0;
}
