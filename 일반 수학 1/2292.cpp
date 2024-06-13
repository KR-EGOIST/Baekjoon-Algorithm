#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	int sum = 1;
	int layer = 1;

	while (n > sum) {
		sum += 6 * layer;
		layer++;
	}

	cout << layer;

	return 0;
}
