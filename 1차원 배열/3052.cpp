#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	vector<int> v;
	vector<int> result;
	int n;

	for (int i = 0; i < 10; i++) {
		cin >> n;
		v.push_back(n % 42);
	}

	/*
	백터 내 중복 값 지우기

	먼저 오름차순으로 정렬 해준 다음
	unique 함수의 리턴값부터 vector의 end 까지 제거해줍니다.

	사용하는 함수 : sort, unique, erase
	*/
	sort(v.begin(), v.end());
	vector<int>::iterator it = unique(v.begin(), v.end());
	v.erase(it, v.end());
	
	cout << v.size() << "\n";

	return 0;
}
