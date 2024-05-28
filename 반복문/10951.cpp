/*
EOF란?
End Of File의 약자로, 파일의 끝 또는 종료를 의미한다.
흔히 소스코드를 빌드 후 프롬프트 창에서 실행한 것 또한 파일의 실행이므로, 프로그램 종료 또는 무한루프 탈출 조건으로 EOF를 쓰기도 한다.

EOF 입력 방법
윈도우 - Control + z
Mac/Unix - Control + d
*/

#include<iostream>
using namespace std;

int main() {
	int a, b;

	while (1) {
		cin >> a >> b;

		if (cin.eof()) break;
		
		cout << a + b << endl;
	}

	return 0;
}
