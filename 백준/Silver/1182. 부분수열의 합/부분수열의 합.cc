#include<iostream>
using namespace std;
int n, m;
int arr[21], input[21];
int c = 0;

void dfs(int num, int cnt, int k) {
	if (cnt == k) {
		long long sum = 0;
		for (int i = 0; i < cnt; i++) {
			sum += arr[i];
		}
		if (sum == m) c++;
		return;
	}
	for (int i = num; i < n; i++) {
		arr[cnt] = input[i];
		dfs(i + 1, cnt + 1,k);	
	}
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}

	for (int i = 1; i <= n; i++) {
		dfs(0,0,i);
	}
	cout << c << "\n";
	return 0;
}