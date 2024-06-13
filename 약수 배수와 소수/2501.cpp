#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector <int> v;

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0) {
			v.push_back(i);
			if (i != n / i) {
				v.push_back(n / i);
			}
		}
	}

	sort(v.begin(), v.end());

	if (k > v.size()) {
		cout << 0 << "\n";
	}
	else {
		cout << v[k - 1] << "\n";
	}

	return 0;
}
