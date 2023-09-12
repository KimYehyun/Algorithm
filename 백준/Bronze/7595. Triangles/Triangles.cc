#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				cout << "*";
			}cout << "\n";
		}
	}
	return 0;
}