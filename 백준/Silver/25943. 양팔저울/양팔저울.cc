#include<iostream>
#include<cmath>
using namespace std;
int arr[10001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int left = arr[0];
	int right = arr[1];
	for (int i = 2; i < n; i++) {
		if (left <= right) {
			left += arr[i];
		}
		else {
			right += arr[i];
		}
	}
	
	int key = abs(right - left);
	int ans = 0;
	int G[7] = { 100,50,20,10,5,2,1 };
	for (int i = 0; i < 7; i++) {
		ans += key / G[i];
		key %= G[i];
	}
	cout << ans;


	return 0;
}