#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	// 행이 n, 열이 m인 2차원 배열의 동적할당 구현
	int** arr1 = new int* [n] {};
	int** arr2 = new int* [n] {};
	for (int i = 0; i < n; i++)
	{
		arr1[i] = new int[m];
		arr2[i] = new int[m];
	}

	// arr1 배열에 값 할당
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr1[i][j];
		}
	}

	// arr2 배열에 값 할당
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr2[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr1[i][j] + arr2[i][j] << " ";
		}
		cout << '\n';
	}

	// 메모리 해제
	for (int i = 0; i < n; i++)
	{
		delete[] arr1[i];
		delete[] arr2[i];
	}
	delete[] arr1;
	delete[] arr2;

	return 0;
}

//========================================================

/* vector 이용 */

#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<vector<int>> A(n, vector<int>(m, 0)), B(n, vector<int>(m, 0));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> B[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << A[i][j] + B[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
