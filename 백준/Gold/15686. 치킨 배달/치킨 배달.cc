#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

struct node {
	int x, y;
};

int n, m;
int arr[51][51];

vector<node>v;
int choose[51];
bool visit[51];
int ans = 987654321;

void house() {
	
	int totDist = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 1) {
				int dist = 987654321;
				for (int x = 0; x < m; x++) {
					int dist_1 = abs(i - v[choose[x]].x) + abs(j - v[choose[x]].y);
					dist = min(dist, dist_1);
				}
				totDist += dist;
			}
		}
	}

	ans = min(ans, totDist);
}

void dfs(int num, int cnt) {
	if (cnt == m) {
		house();
		return;
	}
	for (int i = num; i < v.size(); i++) {
		if (!visit[i]) {
			visit[i] = 1;
			choose[cnt] = i;
			dfs(i+1,cnt + 1);
			visit[i] = 0;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 2) v.push_back({ i,j });
		}
	}

	dfs(0,0);
	
	cout << ans << "\n";

	return 0;
}