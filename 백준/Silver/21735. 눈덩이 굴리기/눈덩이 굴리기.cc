#include<iostream>
using namespace std;
typedef long long ll;
int n, m;
int arr[101];
ll max_v = 0;
void dfs(int time, int cur, ll snow) {

	//cout << time << " " << cur << " " << snow << "\n";
	if (time == m || cur==n) {
		max_v = max(max_v, snow);
		return;
	}

	dfs(time + 1, cur + 1, snow + arr[cur + 1]);
	dfs(time + 1, cur + 2, (snow / 2) + arr[cur + 2]);

}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	dfs(0, 0, 1);
	cout << max_v;

	return 0;
}