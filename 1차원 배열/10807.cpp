#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n = 0;	// 정수의 갯수 n
	cin >> n;

	int* arr = new int[n] {};	// 동적 배열로 배열 포인터 초기화

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int v = 0;	// 찾으려고 하는 정수 v
	cin >> v;

	int cnt = 0;	// 찾은 정수의 갯수 cnt
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == v) cnt++;
	}

	cout << cnt << "\n";

	delete[] arr;	// 메모리 해제

	return 0;
}
