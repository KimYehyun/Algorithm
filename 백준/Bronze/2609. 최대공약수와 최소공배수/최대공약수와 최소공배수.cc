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
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}
int main(void) {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int a, b;
	cin >> a >> b;
	
	cout << gcd(a, b) << "\n" << lcm(a, b);
	
	return 0;
}