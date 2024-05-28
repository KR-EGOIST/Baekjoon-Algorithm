#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	int* arr = new int[n] {};

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	/*
	min_element(begin, end)와 max_element(begin, end) 함수는 인자로 전달된 배열의 begin부터 end까지의 요소들 중에 최소, 최대 값을 찾습니다.

	함수는 최대, 최소 값에 해당하는 객체 주소를 리턴하기 때문에, *을 사용하여 value를 읽어야 합니다.
	*/
	int min = *min_element(arr, arr + n);
	int max = *max_element(arr, arr + n);

	cout << min << " " << max << "\n";

	delete[] arr;

	return 0;
}
