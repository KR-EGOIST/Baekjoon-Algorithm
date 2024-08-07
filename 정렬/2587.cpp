#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> v;
	int n;
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());

	int sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}

	int avg = sum / v.size(); // 평균 계산

	// 중앙값 계산
	int mid = v[2]; // 정렬된 벡터의 세 번째 요소가 중앙값

	cout << avg << "\n";
	cout << mid << "\n";

	return 0;
}
