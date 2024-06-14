#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

bool isPrime(int num) {
	if (num < 2) {
		return false;
	}

	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> v;
	int m, n;
	cin >> m >> n;

	for (int i = m; i <= n; i++)
	{
		if (isPrime(i)) {
			v.push_back(i);
		}
	}

	int sum = 0;
	if (v.size() == 0) {
		cout << -1 << "\n";
	}
	else {
		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++)
		{
			sum += v.at(i);
		}
		cout << sum << "\n";
		cout << v.at(0) << "\n";
	}

	return 0;
}
