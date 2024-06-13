#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, v;
	cin >> a >> b >> v;

	// v - b 인 이유
	// 정상에 올라간 후에는 미끄러지지 않는다.
	// 마지막 날에는 (a - b) 미터만큼 올라가는게 아니라
	// a 만큼 올라가면 끝이다.
	// 그래서 최종 목표 높이는 v - b 이다.
	if ((v - b) % (a - b) == 0) {
		cout << (v - b) / (a - b);
	}
	else {
		cout << (v - b) / (a - b) + 1;
	}

	return 0;
}
