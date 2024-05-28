/*
<algorithm> 헤더 필요

find( v.begin() , v.end() , 찾을값 ) 

find는 찾는 값을 가리키고 있는 iterator를 반환한다.
그래서 *를 붙이면 it가 가리키는 값을 반환하고,
it - v.begin()을 해주면 가리키는 값의 index를 반환한다.

값이 없어 못 찾았을 때 it는 v.end를 가리키게 된다.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	vector<int> v;
	int n;

	for (int i = 0; i < 28; i++) {
		cin >> n;
		v.push_back(n);
	}

	int result[2] = {0, };
	int idx = 0;

	for (int i = 1; i <= 30; i++) {
		if (find(v.begin(), v.end(), i) == v.end()) {
			result[idx++] = i;
		}
	}

	cout << result[0] << "\n";
	cout << result[1] << "\n";

	return 0;
}
