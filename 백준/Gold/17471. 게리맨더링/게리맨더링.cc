#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int n, ans=2134567890;
int p[11];
vector<int>A;
vector<int>B;
vector<int>graph[11];
bool team[11];

void input() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}

	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		for (int j = 1; j <= a; j++) {
			int b;
			cin >> b;
			graph[i].push_back(b);
		}
	}
}

bool bfs(vector<int>&v) {
	queue<int>q;
	bool visited[11] = { 0 };
	visited[v[0]]=1;
	q.push(v[0]);
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int i = 0; i < graph[cur].size(); i++) {
			int next = graph[cur][i];
			if (team[cur] != team[next]) continue;
			if (visited[next] == 1) continue;
			q.push(next);
			visited[next] = 1;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		if (visited[v[i]] == 0) return false;
	}
	return true;
}

int solve() {
	int a=0, b=0;
	for (int i = 0; i < A.size(); i++) {
		a += p[A[i]];
	}
	for (int i = 0; i < B.size(); i++) {
		b += p[B[i]];
	}
	return abs(a - b);
}

void dfs(int cnt){
	
	if (cnt == n+1) {
		if (A.size() == 0 || A.size() == n) return;
		if (bfs(A) == true && bfs(B) == true) {
			ans = min(ans,solve());
		}
		return;
	}
	A.push_back(cnt);
	team[cnt] = 0;
	dfs(cnt + 1);
	A.pop_back();
	B.push_back(cnt);
	team[cnt] = 1;
	dfs(cnt + 1);
	B.pop_back();
}

int main(void) {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	input();
	dfs(1);
	if (ans == 2134567890)cout << "-1";
	else cout << ans << "\n";
	return 0;
}
