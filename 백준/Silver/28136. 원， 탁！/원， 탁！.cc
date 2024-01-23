#include<iostream>
using namespace std;
int arr[1000001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int cnt = 0;
	arr[n] = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] >=arr[i+1]) {
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}