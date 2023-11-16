#include<iostream>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int a, b,sum=0;
	cin >> a >> b;
	if (a > b) sum = b + (b + 1);
	else sum = a + (a - 1);
	cout << sum << "\n";
	return 0;
}