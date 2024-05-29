#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> v(n);
	int score = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> score;
		v[i] = score;
	}

	int max = *max_element(v.begin(), v.end());
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (float)v[i] / max * 100;
	}

	cout << sum / n << "\n";

	return 0;
}
