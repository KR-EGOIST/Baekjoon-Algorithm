/*
Ex) N= AZ103     B=8 (8진법)

ch="3"=N[4]
0의 아스키코드는 48
3의 아스키코드는 51
이므로 '3'-'0'을 통해 정수 3을 얻을 수 있다.
따라서 result에 3 x (8^0)를 더해준다.

ch="0"=N[3]
'0'-'0'을 통해 정수 0을 얻었다.
0 x 8¹를 더해준다.

ch="1"=N[2]
'1'-'0'을 통해 정수 1을 얻었다.
1 x 8²를 더해준다.

ch="Z"=N[1]
A=10, B=11, C=12....Z=35이다.
A의 아스키코드는 65
Z의 아스키코드는 90
Z는 A에서 부터 25번째에 있다
'Z'-'A'+10 = 90-65+10 = 35
그말은 Z는 25+10 즉 35
35 x 8³를 더해준다.

ch="A"=N[0]
Z와 마찬가지로
'A'-'A'+10으로 10을 구해준다.
10 X 8⁴ 를 더해준다.

※ result=58947
*/

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	string n;
	int b;
	cin >> n >> b;

	int result = 0;
	for (int i = 0; i < n.length(); i++)
	{
		char ch = n[n.length() - i - 1];

		if ('0' <= ch && '9' >= ch) {
			result += (ch - '0') * (int)pow(b, i);
		}
		else {
			result += (ch - 'A' + 10) * (int)pow(b, i);
		}
	}

	cout << result;

	return 0;
}

//================================================

#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	string n;
	int b;
	cin >> n >> b;

	cout << stoi(n, nullptr, b);

	return 0;
}
