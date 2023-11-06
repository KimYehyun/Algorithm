#include<iostream>
#include<algorithm>
int arr[1000001];

using namespace std;
int main(void) {

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int left = 0, right = 1;
	int cnt = 0;
	int max_v = 0;
	if (arr[0] % 2 == 1) cnt = 1;
	while (1) {
		if (cnt > m) {
			if (arr[left] % 2 == 1) cnt--;
			left++;
		}
		else {
			max_v = max(max_v, (right - left)-cnt);
			if (right == n) break;
			if (arr[right] % 2 == 1)cnt++;
			right++;
		}
	}

	cout << max_v;
	return 0;
}