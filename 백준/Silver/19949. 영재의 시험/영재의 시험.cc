#include<iostream>
#include<vector>
using namespace std;
int ans;
vector<int>arr;
vector<int>input;

bool visit[11];
void dfs(int x) {
	if (arr.size() == 10) {
		if (x >= 5) ans++;
		return;
	}

	for (int i = 1; i <= 5; i++) {
		int nx = x;
		if (arr.size() <= 1) {
			arr.push_back(i);
			if (arr[arr.size() - 1] == input[arr.size() - 1]) nx++;
			dfs(nx);
			arr.pop_back();
		}
		else {
			if (arr[arr.size() - 1] == i && arr[arr.size() - 2] == i) continue;
			arr.push_back(i);
			if (arr[arr.size() - 1] == input[arr.size() - 1])nx++;
			dfs(nx);
			arr.pop_back();
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	for (int i = 0; i < 10; i++) {
		int a;
		cin >> a;
		input.push_back(a);
	}

	dfs(0);

	cout << ans << "\n";
	return 0;
}