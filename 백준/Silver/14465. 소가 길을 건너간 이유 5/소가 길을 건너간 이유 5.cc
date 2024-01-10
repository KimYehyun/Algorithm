#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr[100001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, k, b;
	cin >> n >> k >> b;
	for (int i = 1; i <= n; i++) arr[i] = 1;
	
	for (int i = 1; i <= b; i++) {
		int a;
		cin >> a;
		arr[a] = 0;
	}

	for (int i = 2; i <= n; i++) arr[i] += arr[i - 1];
	
	int ans = 0;
	for (int i = k; i <= n; i++) {
		ans = max(ans, arr[i] - arr[i - k]);
	}
	cout << k - ans << "\n";

	return 0;
}