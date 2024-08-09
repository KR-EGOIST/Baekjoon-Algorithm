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

	vector<pair<int, int>> v;
	int x, y;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		cin >> y;
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << ' ' << v[i].second << "\n";
	}

	return 0;
}

//------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> v(n); // 벡터의 크기를 미리 할당하여 메모리 사용 최적화

    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second; // pair의 요소에 직접 입력
    }

    sort(v.begin(), v.end()); // 기본 pair 정렬은 x, y 순으로 정렬

    for (const auto& p : v) { // range-based for loop 사용
        cout << p.first << ' ' << p.second << "\n";
    }

    return 0;
}
