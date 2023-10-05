#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct node {
	long long j, s, idx;
};

struct total {
	long long ID, sum, cnt, time;
};

bool cmp(node& a, node& b) {
	if (a.j == b.j) return a.s > b.s;
	return a.j < b.j;
}

bool cmp2(total& a, total& b) {
	if (a.sum == b.sum) {
		if (a.cnt == b.cnt) {
			return a.time < b.time;
		}
		return a.cnt < b.cnt;
	}
	return a.sum > b.sum;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int test_case;
	cin >> test_case;
	for (int T = 0; T < test_case; T++) {
		long long n, k, t, m;
		cin >> n >> k >> t >> m;
		vector<node>v[101];
		for (int i = 0; i < m; i++) {
			long long id, j_num, score;
			cin >> id >> j_num >> score;
			v[id].push_back({ j_num,score,i });
		}

		vector<total>tt;
		
		for (int j = 1; j <= n; j++) {
			long long size = v[j].size();
			long long idx = v[j][size-1].idx;
			long long sum = 0;
			long long ID = 0;
			sort(v[j].begin(), v[j].end(), cmp);
			for (int k = 0; k < v[j].size(); k++) {
				if (ID == v[j][k].j) continue;
				sum += v[j][k].s;
				ID = v[j][k].j;
			}
			tt.push_back({ j,sum,size,idx });
		}
		
		sort(tt.begin(), tt.end(), cmp2);

		for (int i = 0; i < tt.size(); i++) {
			if (tt[i].ID == t) {
				cout << i + 1 << "\n";
				break;
			}
		}
	}
	return 0;
}