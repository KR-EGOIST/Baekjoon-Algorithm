#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> v;
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	v.push_back(x - 0);
	v.push_back(y - 0);
	v.push_back(w - x);
	v.push_back(h - y);

	int min = *min_element(v.begin(), v.end());

	cout << min << "\n";

	return 0;
}
