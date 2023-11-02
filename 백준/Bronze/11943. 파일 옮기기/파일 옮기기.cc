#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int k1 = a + d;
	int k2 = b + c;
	cout << min(k1, k2) << "\n";
	return 0;
}