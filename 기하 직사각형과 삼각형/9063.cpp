#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	vector<int> xv;
	vector<int> yv;

	int n;
	cin >> n;

	int x, y;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		xv.push_back(x);
		yv.push_back(y);
	}

	int xmax = *max_element(xv.begin(), xv.end());
	int xmin = *min_element(xv.begin(), xv.end());

	int ymax = *max_element(yv.begin(), yv.end());
	int ymin = *min_element(yv.begin(), yv.end());

	int width = xmax - xmin;
	int height = ymax - ymin;

	cout << width * height << "\n";

	return 0;
}
