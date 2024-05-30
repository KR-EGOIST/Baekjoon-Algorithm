#include<iostream>
#include<vector>
using namespace std;

void print_vector(vector<int> v) {
	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << ' ';
	}
	cout << "\n";
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> chess = { 1, 1, 2, 2, 2, 8 };
	vector<int> isMy;

	int piece;
	for (int i = 0; i < chess.size(); i++)
	{
		cin >> piece;
		isMy.push_back(piece);
	}

	for (int i = 0; i < chess.size(); i++)
	{
		chess[i] = chess[i] - isMy[i];
	}

	print_vector(chess);

	return 0;
}
