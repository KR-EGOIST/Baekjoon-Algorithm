#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// 에라토스테네스의 체로 소수를 구하는 함수
vector<bool> sieve(int max_num) {
	vector<bool> isPrime(max_num + 1, true);
	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i * i <= max_num; i++) {
		if (isPrime[i]) {
			for (int j = i * i; j <= max_num; j += i) {
				isPrime[j] = false;
			}
		}
	}

	return isPrime;
}

// 골드바흐 파티션의 개수를 구하는 함수
int countGoldbachPartitions(int n) {
	vector<bool> isPrime = sieve(n);
	int count = 0;

	// p1 <= p2 이므로 p1 <= n/2만 계산하면 된다.
	for (int p1 = 2; p1 <= n / 2; ++p1) {
		int p2 = n - p1;
		if (isPrime[p1] && isPrime[p2]) {
			count++;
		}
	}

	return count;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int t;
	cin >> t;

	int n;
	while (t--)
	{
		cin >> n;

		int result = countGoldbachPartitions(n);
		cout << result << "\n";
	}

	return 0;
}
