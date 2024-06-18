/*

두개의 같은 수와 다른 한가지 수를 비트 XOR 연산할 시 남은 다른 한 가지 수가 나오는 원리이다.
Ex. ((5 ^ 5) ^ 7) 일 경우
101 ^ 101 = 000
000 ^ 111 = 111 즉 7 이 된다.
이 비트연산은 순서에 관계가 없다
(7^5)^5 인 경우
111 ^ 101 = 010
010 ^ 101 = 111; 7이 된다.

즉, XOR은 세 수 이상의 연산에서 연산의 순서를 바꿔도 계산 결과가 같은 결합법칙(associative)이 성립한다는 것을 기억하자.

*/

#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int x[3] = { 0, };
	int y[3] = { 0, };

	for (int i = 0; i < 3; i++)
	{
		cin >> x[i] >> y[i];
	}

	cout << ((x[0] ^ x[1]) ^ x[2]) << " " << ((y[0] ^ y[1]) ^ y[2]);

	return 0;
}
