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

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	// a를 정렬하여 이진 검색 준비
	sort(a.begin(), a.end());

	int m;
	cin >> m;
	
	vector<int> b(m);
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}

	for (int i = 0; i < m; i++)
	{
		// 이진 검색을 통해 b[i]가 a에 있는지 확인
		if (binary_search(a.begin(), a.end(), b[i])) {
			cout << 1 << " ";
		}
		else {
			cout << 0 << " ";
		}
	}
	cout << "\n";

	return 0;
}

//===============================================================

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    unordered_set<int> cardSet;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        cardSet.insert(num); // 숫자 카드를 set에 삽입
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        // set을 이용하여 존재 여부 확인
        if (cardSet.find(num) != cardSet.end()) {
            cout << 1 << " ";
        } else {
            cout << 0 << " ";
        }
    }
    cout << "\n";

    return 0;
}
