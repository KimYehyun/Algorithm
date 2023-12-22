#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m;
int arr[500001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	long long left = 0, right = 0, max_v = 0, value = arr[0];
	while (right < n) {
		if (value <= m) {
			max_v = max(max_v, value);
			value += arr[++right];
		}
		else {
			value -= arr[left++];
		}
	}
	cout << max_v << "\n";


	return 0;
}