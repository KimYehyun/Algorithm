#include <iostream>

using namespace std;


int main() {

	int n;
	int result;
	int c_2, c_5;

	cin >> n;
	c_5 = n / 5;
	
	if (n % 5 == 0) {
		cout << c_5;
		return 0;
	}
	while (c_5 >= 0) {
		result = (n - (c_5 * 5)) % 2;
		c_2 = (n - (c_5 * 5)) / 2;
		if (result == 0) {
			cout << c_5 + c_2;
			return 0;
		}
		c_5--;
	}
	cout << -1;
	return 0;
}