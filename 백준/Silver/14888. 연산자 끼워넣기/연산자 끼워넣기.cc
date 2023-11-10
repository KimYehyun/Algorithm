#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>v;
vector<int>op;
vector<int>result;
bool visit[11];
int n, m, sum;
int min_v = 2134567890, max_v = -2134567890;

int solve() {
	sum = v[0];
	int a = 1;
	for (int i = 0; i < result.size(); i++) {
		if (result[i] == 1) {
			sum += v[a];
		}
		else if (result[i] == 2) {
			sum -= v[a];
		}
		else if (result[i] == 3) {
			sum *= v[a];
		}
		else {
			sum /= v[a];
		}
		a++;
	}
	return sum;
}

void dfs(int cnt) {
	if (cnt == m) {
		min_v = min(min_v,solve());
		max_v = max(max_v, solve());
		return;
	}
	for (int i = 0; i < m; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			result.push_back(op[i]);
			dfs(cnt + 1);
			result.pop_back();
			visit[i] = 0;
		}
	}
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	for(int k=0;k<4;k++){
		int a;
		cin >> a;
		for (int i = 0; i < a; i++) {
			op.push_back(k+1);
		}
		m += a;
	}
	
	dfs(0);

	cout << max_v << "\n" << min_v << "\n";

	return 0;
}