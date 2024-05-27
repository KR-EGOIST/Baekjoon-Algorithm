#include<iostream>
using namespace std;

int main() {
	int num1, num2;
	cin >> num1 >> num2;

	if (num1 >= 0 && num2 >= 0) {
		cout << num1 * (num2 % 10) << endl;
		cout << num1 * ((num2 / 10) % 10) << endl;
		cout << num1 * (num2 / 100) << endl;
		cout << num1 * num2 << endl;
	}
	
	return 0;
}
