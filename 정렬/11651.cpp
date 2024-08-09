#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}

	sort(v.begin(), v.end(), compare);

	for (const auto& p : v) {
		cout << p.first << ' ' << p.second << "\n";
	}

	return 0;
}

//-------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple> // tuple을 사용하기 위한 헤더 파일

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    // 람다 함수를 사용하여 정렬
    sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return tie(a.second, a.first) < tie(b.second, b.first);
    });

    for (const auto& p : v) {
        cout << p.first << ' ' << p.second << "\n";
    }

    return 0;
}
