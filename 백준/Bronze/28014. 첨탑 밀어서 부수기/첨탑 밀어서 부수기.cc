#include<iostream>
using namespace std;
int arr[5000001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int cnt = 1;
	int cur = arr[0];
	for (int i = 1; i < n; i++) {
		if (cur <= arr[i]) {
			cnt++;	
		}
		cur = arr[i];
	}
	cout << cnt << "\n";

	return 0;
}