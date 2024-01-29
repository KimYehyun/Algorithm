#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;
int arr[4000001];
long long ans[4000001];
int n;
long long k = 1;
long long sum = 0;
int s, e;
int cnt;
void primeN() {
	for (int i = 2; i <= n; i++)
		arr[i] = i;
	for (int i = 2; i <= sqrt(n); i++) {
		if (arr[i] == 0) continue;
		for (int j = i * i; j <= n; j += i) {
			arr[j] = 0;
		}
	}

	for (int i = 2; i <= n; i++) {
		if (arr[i] != 0) {
			sum += arr[i];
			ans[k] = sum;
			if (sum < n) e = k;
			k++;
		}
	}
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);


	cin >> n;
	primeN();
	while (e <= k) {
		if (ans[e] - ans[s] == n) {
			cnt++;
			e++;
		}
		else if (ans[e] - ans[s] > n) s++;
		else if (ans[e] - ans[s] < n) e++;
	}

	cout << cnt;
	return 0;
}