#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isPrime(int num) {
	// 1은 소수가 아니다
	if (num < 2) {
		return false;
	}

	for (int i = 2; i <= sqrt(num); i++)
	{
		// 한 번이라도 나누어지면 소수가 아니므로 return false
		if (num % i == 0) {
			return false;
		}
	}

	// 나눠진 수가 없다면 해당 수는 소수이므로 return true
	return true;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> v(n);

	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	int count = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (isPrime(v[i])) {
			count++;
		}
	}

	cout << count << "\n";

	return 0;
}
