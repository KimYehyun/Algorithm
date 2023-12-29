#include<iostream>
#include<queue>
using namespace std;

struct node {
	int x, t, c;
};

int bfs(int s, int t) {
	queue<node>q;
	q.push({ s,t,0 });
	
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		if (cur.x > cur.t) continue;
		if (cur.x == cur.t) return cur.c;
		q.push({ cur.x * 2, cur.t + 3,cur.c + 1 });
		q.push({ cur.x + 1,cur.t,cur.c + 1 });
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int s, t;
		cin >> s >> t;
		int result = bfs(s,t);
		cout << result << "\n";
	}
	return 0;
}