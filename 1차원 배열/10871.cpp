#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	vector<int> v;
	int n, x;
	cin >> n >> x;

	int* arr = new int[n] {};

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (x > arr[i]) v.push_back(arr[i]);
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << " ";
	}

	cout << "\n";

	return 0;
}
