#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, ans = 2134567890;
int arr[21][21];
vector<int>A;
vector<int>B;

void input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
}

int solve() {

	int sum_a = 0, sum_b = 0;
	for (int i = 0; i < A.size(); i++) {
		for (int j = 0; j < A.size(); j++) {
			sum_a += arr[A[i]][A[j]];
		}
	}

	for (int i = 0; i < B.size(); i++) {
		for (int j = 0; j < B.size(); j++) {
			sum_b += arr[B[i]][B[j]];
		}
	}
	return abs(sum_a - sum_b);
}


void dfs(int cnt) {
	if (cnt==n) {
		ans = min(ans,solve());
		return;
	}
	
	A.push_back(cnt);
	dfs(cnt + 1);
	A.pop_back();
	B.push_back(cnt);
	dfs(cnt + 1);
	B.pop_back();
}


int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	input();
	dfs(0);
	cout << ans << "\n";


	return 0;
}