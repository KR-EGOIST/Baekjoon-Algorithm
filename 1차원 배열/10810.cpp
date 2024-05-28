#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<int> v(n);

	int a, b, c;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		for (int j = a; j <= b; j++)
		{
			v[j - 1] = c;
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << ' ';
	}

	return 0;
}
