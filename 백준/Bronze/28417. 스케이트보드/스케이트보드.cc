#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, ans=0;
	vector<int>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b,arr[5];
		int sum = 0;
		cin >> a >> b;
		sum += max(a, b);

		for (int j = 0; j < 5; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + 5, greater<>());
		sum += (arr[0] + arr[1]);
		ans = max(ans, sum);
	}
	cout << ans;
	return 0;
}