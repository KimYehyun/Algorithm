#include<iostream>
using namespace std;

int n, m, sum, cnt =1;
int arr[51];
int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	if (n == 0) {
		cout << 0 << "\n";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (sum + arr[i] <= m)
			sum += arr[i];
		else {
			cnt++;
			sum = arr[i];
		}
	}
	
	cout << cnt;
	return 0;
}