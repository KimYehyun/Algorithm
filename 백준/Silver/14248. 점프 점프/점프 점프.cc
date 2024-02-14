#include<iostream>
#include<algorithm>
using namespace std;
int arr[100001];
int n, s;
bool visit[100001];

void dfs(int start) {
	if (start > n || start < 0) {
		return;
	}
	visit[start] = 1;
	if (start + arr[start] < n && !visit[start + arr[start]]) {
		dfs(start + arr[start]);
	}
	if (start - arr[start] >= 0 && !visit[start - arr[start]]) {
		dfs(start - arr[start]);
	}
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> s;

	dfs(s - 1);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (visit[i] == 1) cnt++;
	}
	cout << cnt;
	return 0;
}