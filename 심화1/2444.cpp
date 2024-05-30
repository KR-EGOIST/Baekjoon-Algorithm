#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - (i + 1); j++)
		{
			cout << " ";
		}
		for (int k = 0; k < (i * 2) + 1; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < (i * 2) - 1; k++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
