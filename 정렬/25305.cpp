#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	vector<int> v;
	int score;
	for (int i = 0; i < n; i++)
	{
		cin >> score;
		v.push_back(score);
	}

	// 내림차순 정렬
	// reverse 반복자인 rbegin, rend 이용
	sort(v.rbegin(), v.rend());

	cout << v[k - 1] << "\n";

	return 0;
}

//---------------------------------------------

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    priority_queue<int, vector<int>, greater<int>> minHeap;
    int score;

    for (int i = 0; i < n; i++) {
        cin >> score;
        minHeap.push(score);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    cout << minHeap.top() << "\n";

    return 0;
}
