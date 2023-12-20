#include<iostream>
#include<algorithm>
#include<memory.h>
using namespace std;
#define INF 987654321
int n, k;
int arr[101];
int d[100001];
int result = 0;
void input() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void solve() {
	for (int i = 0; i < n; i++) {
		d[arr[i]] = 1;
		for (int j = arr[i]; j <= k; j++) {
			d[j] = min(d[j], d[j - arr[i]] + 1);
		}
	}
	if (d[k] < INF)
		cout << d[k] << "\n";
	else
		cout << -1 << "\n";
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	for (int i = 0; i < 10001; i++) {
		d[i] = INF;
	}
	input();
	solve();

	return 0;
}