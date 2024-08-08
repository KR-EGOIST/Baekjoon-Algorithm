#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> v(n);  // 벡터의 크기를 미리 할당
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	for (const int& num : v) {  // 범위 기반 for 루프 사용
    cout << num << "\n";
  }

	return 0;
}
