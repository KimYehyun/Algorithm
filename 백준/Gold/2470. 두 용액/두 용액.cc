#include<iostream>
#include<algorithm>
using namespace std;
int n;
int arr[100001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int s = 0, e = n - 1, min = 2134567890;
	int ans1=0, ans2=0;
	while (s < e) {
		int sum = arr[s] + arr[e];

		if (min > abs(sum)) {
			min = abs(sum);
			ans1 = arr[s];
			ans2 = arr[e];
			
		}
		if (sum == 0) break;
		if (sum < 0) s++;
		else e--;
	}

	cout << ans1 << " " << ans2;

	return 0;
}