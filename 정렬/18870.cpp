/*

만약 입력이 다음과 같다면:
5
10 20 10 30 20

정렬된 후 중복 제거된 리스트는 [10, 20, 30]가 됩니다. 여기서:

10은 0 (그보다 작은 서로 다른 좌표가 없음)
20은 1 (10 하나가 있음)
30은 2 (10, 20 두 개가 있음)
따라서 압축된 좌표 리스트는 0 1 0 2 1가 됩니다.

*/

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	vector<int> vc = v;	// v의 복사본
	sort(vc.begin(), vc.end());	// 정렬
	vc.erase(unique(vc.begin(), vc.end()), vc.end());	// 중복 제거

	map<int, int> m;	// 좌표 압축 결과를 저장할 map
	for (int i = 0; i < vc.size(); i++)
	{
		// vc[i]보다 작은 서로 다른 좌표의 개수는 i
		m[vc[i]] = i;
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << m[v[i]] << " ";
	}
	cout << "\n";

	return 0;
}
