#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,ans=987654321;
int arr[21][21];
vector<int>a;
vector<int>b;
void input() {
	cin >> n;
	for (int i = 0; i < n; i++)
		for(int j=0;j<n;j++)
			cin >> arr[i][j];	
}
int sum_v() {
	int result_a = 0, result_b=0;
	for (int i = 0; i < n/2; i++) {
		for (int j = 0; j < n/2; j++) {
			result_a += arr[a[i]][a[j]];
			result_b += arr[b[i]][b[j]];
		}
	}
	return abs(result_a - result_b);
}

void dfs(int cnt) {
	if (a.size() > n / 2 || b.size() > n / 2) return;
	if (cnt == n) {
		ans = min(ans,sum_v());
		return;
	}
	a.push_back(cnt);
	dfs(cnt + 1);
	a.pop_back();
	b.push_back(cnt);
	dfs(cnt + 1);
	b.pop_back();
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	input();
	dfs(0);
	
	cout << ans << "\n";

	return 0;
}