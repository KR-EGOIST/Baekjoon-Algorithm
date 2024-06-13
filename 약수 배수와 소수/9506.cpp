#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> v;
	int n;

	while (true) {
		cin >> n;

		if (n == -1) {
			break;
		}

		for (int i = 1; i < sqrt(n); i++)
		{
			if (n % i == 0) {
				v.push_back(i);

				if (i != n / i) {
					v.push_back(n / i);
				}
			}
		}

		// 벡터 오름차순 정렬
		sort(v.begin(), v.end());

		int sum = 0;
		for (int i = 0; i < v.size() - 1; i++)
		{
			sum += v[i];
		}
		
		if (n == sum) {
			cout << n << " = ";
			for (int i = 0; i < v.size() - 2; i++)
			{
				cout << v[i] << " + ";
			}
			cout << v[v.size() - 2] << "\n";
		}
		else {
			cout << n << " is NOT perfect." << "\n";
		}

		// 매 반복마다 벡터를 비워줘야한다.
		v.clear();
	}

	return 0;
}
