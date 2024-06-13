#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int x;
	cin >> x;

	// x 가 위치한 대각선 라인 찾기
	// 5 - 1 > 0 이므로 첫 번째 루프 : x = 4 , line = 2
	// 4 - 2 > 0 이므로 두 번째 루프 : x = 2 , line = 3
	// 2 - 3 > 0 성립하지 않으므로 루프 종료 : x = 2 , line = 3
	int line = 1;
	while (x - line > 0) {
		x -= line;
		line++;
	}

	// 대각선이 홀수 라인일 경우
	// 만약 x 가 5 일 경우
	// line 은 3 이므로 홀수이므로 if문 조건 true
	// 홀수 라인을 보면 분모는 계산해 놓은 x 가 되고,
	// 분자는 line + 1 - x 임을 확인할 수 있다.
	if (line % 2 == 1) {
		cout << line + 1 - x << '/' << x;
	}
	// 대각선이 짝수 라인일 경우
	else {
		cout << x << '/' << line + 1 - x;
	}

	return 0;
}
