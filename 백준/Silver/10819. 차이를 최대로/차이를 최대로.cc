#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int n,m;
int arr[10];
int input[10];
bool visit[10];
int max1 = 0;

void Sum() {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		sum += abs(arr[i - 1] - arr[i]);
	}
	max1 = max(max1, sum);
}

void dfs(int cnt) {
	if (cnt == m) {
		Sum();
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			arr[cnt] = input[i];
			dfs(cnt + 1);
			visit[i] = 0;
		}
	}
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}
	m = n;
	dfs(0);
	cout << max1 << "\n";
	return 0;
}