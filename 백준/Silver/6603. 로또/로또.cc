#include<iostream>
using namespace std;
int lotto[15];
int ans[15];
int n;
void dfs(int start, int end) {
	if (end == 6) {
		for (int i = 0; i < 6; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = start; i < n; i++) {
		ans[end] = lotto[i];
		dfs(i + 1, end + 1);
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	while (1) {
		cin >> n;
		if (n == 0) {
			break;
		}
		for (int i = 0; i < n; i++) {
			cin >> lotto[i];
		}
		dfs(0, 0);
		cout << "\n";
	}
	return 0;
}