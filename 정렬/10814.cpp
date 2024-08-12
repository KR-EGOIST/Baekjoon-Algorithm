#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<pair<int, string>> v(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}

	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}
