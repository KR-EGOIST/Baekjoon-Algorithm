#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	vector<int> v;
	int num;

	for (int i = 0; i < 9; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	int max = *max_element(v.begin(), v.end());
	int maxIdx = max_element(v.begin(), v.end()) - v.begin();

	cout << max << "\n";
	cout << maxIdx + 1 << "\n";

	return 0;
}
