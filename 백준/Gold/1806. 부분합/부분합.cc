#include<iostream>
#include<algorithm>
using namespace std;
long long arr[100001];

int main(void) {

	long long n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	long long left = 0, right = 1, value = arr[0];
	long long min_v = 987654321;
	while (1) {
		if (value < m) {
			if (right == n) break;
			value += arr[right];
			right++;
		}
		else {
			min_v = min(min_v, (right - left));
			value -= arr[left];
			left++;
		}
	}
	if (min_v == 987654321) cout << 0;
	else cout << min_v;

	return 0;
}