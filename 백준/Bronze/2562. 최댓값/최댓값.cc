#include<iostream>
#include<algorithm>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int idx, mx = 0;
	for (int i = 1; i <= 9; i++) {
		int a;
		cin >> a;
		
		if (a > mx) {
			mx = a;
			idx = i;
		}
	}
	cout << mx << "\n" << idx << "\n";

	return 0;
}