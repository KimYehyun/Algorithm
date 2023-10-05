#include<iostream>
using namespace std;
bool arr[101][101];
int a, b, c, d;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	for (int i = 0; i < 4; i++) {
		cin >> a >> b >> c >> d;
		for (int j = a+1; j <= c; j++) {
			for (int k = b+1; k <= d; k++) {
				arr[j][k] = 1;
			}
		}
			
	}

	int cnt = 0;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			if (arr[i][j] == 1) cnt++;
		}
	}

	cout << cnt << "\n";

	return 0;
}