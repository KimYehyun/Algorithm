#include<iostream>
using namespace std;
int gcd(int a, int b) {
	int mod = a % b;
	while (mod > 0) {
		a = b;
		b = mod;
		mod = a % b;
	}
	return b;
}
int main(void) {
	
	int a, b, big, small;
	scanf("%d:%d", &a, &b);

	if (a < b) {
		big = b;
		small = a;
	}
	else {
		big = a;
		small = b;
	}
	int result = gcd(big, small);
	cout << a / result << ":" << b / result << "\n";
	return 0;
}