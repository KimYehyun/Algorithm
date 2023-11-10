#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr[101];
vector<pair<int, int>>v;

bool cmp(pair<int,int> &a, pair<int,int> &b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < m; i++) {
		int a,sum=0;
		cin >> a;
		for (int j = 0; j < n; j++) {
			char c;
			cin >> c;
			if (c == 'O') sum += arr[j];
		}
		v.push_back({ a,sum });
	}
	sort(v.begin(), v.end(),cmp);

	cout << v[0].first <<" "<< v[0].second << "\n";

	return 0;
}