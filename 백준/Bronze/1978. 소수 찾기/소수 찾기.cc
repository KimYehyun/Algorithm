#include<iostream>
using namespace std;
int a[1001];
void number() {
	for (int i = 2; i <= 1000; i++) {
		a[i] = i;
	}
	for (int i = 2; i <= 1000; i++) {
		if (a[i] == 0)continue;
		for (int j = i + i; j <= 1000; j += i) {
			a[j] = 0;
		}
	}
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, cnt = 0;
	cin >> n;
	number();
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (a[t] != 0) cnt++;
	}
	cout << cnt;
	return 0;
}