#include<iostream>
using namespace std;
int n;
int arr[10];
bool visit[10];
void dfs(int cnt) {
	if (cnt == n) {
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			arr[cnt] = i;
			dfs(cnt + 1);
			visit[i] = 0;
		}	
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	dfs(0);
	return 0;
}