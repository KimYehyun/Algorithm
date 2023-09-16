#include<iostream>
using namespace std;
int main(void) {
	int a, sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		sum += a * a;
	}
	sum %= 10;
	cout << sum << "\n";
	return 0;
}