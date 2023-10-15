#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int a, b;
	while (cin >> a >> b) {
		if (a == 0 && b == 0) break;
		if (a <= b) cout << "No" << "\n";
		else cout << "Yes" << "\n";
	}
	return 0;
}