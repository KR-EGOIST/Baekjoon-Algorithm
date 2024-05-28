#include<iostream>
using namespace std;

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		for (int j = i + 1; j < t; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < i + 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
