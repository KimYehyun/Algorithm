#include<iostream>
using namespace std;
int n, m;
bool arr[101][101];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		for (int i = a; i < a + 10; i++) {
			for (int j = b; j < b + 10; j++) {
				arr[i][j] = 1;
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (arr[i][j] == 1)cnt++;
		}
	}
	cout << cnt;
	return 0;
}