#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int t;
	cin >> t;
	
	int q = 25, d = 10, n = 5, p = 1;
	int c;
	for (int i = 0; i < t; i++)
	{
		cin >> c;

		cout << c / q << " ";
		c %= q;
		cout << c / d << " ";
		c %= d;
		cout << c / n << " ";
		c %= n;
		cout << c / p << "\n";
	}

	return 0;
}
