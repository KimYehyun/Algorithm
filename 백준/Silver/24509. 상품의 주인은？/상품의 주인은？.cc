#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int, int>>v1, v2, v3, v4;
bool arr[200001];

bool cmp(pair<int, int>& a, pair<int, int>& b) {
	if (a.first == b.first)return a.second < b.second;
	return a.first > b.first;
}


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a, j1, j2, j3, j4;
		cin >> a >> j1 >> j2 >> j3 >> j4;
		v1.push_back({ j1,a });
		v2.push_back({ j2,a });
		v3.push_back({ j3,a });
		v4.push_back({ j4,a });
	}

	sort(v1.begin(), v1.end(),cmp);
	sort(v2.begin(), v2.end(), cmp);
	sort(v3.begin(), v3.end(), cmp);
	sort(v4.begin(), v4.end(), cmp);

	for (int i = 0; i < n; i++) {
		if (arr[v1[i].second] == 0) {
			cout << v1[i].second<<" ";
			arr[v1[i].second] = 1;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[v2[i].second] == 0) {
			cout << v2[i].second<<" ";
			arr[v2[i].second] = 1;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[v3[i].second] == 0) {
			cout << v3[i].second<<" ";
			arr[v3[i].second] = 1;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[v4[i].second] == 0) {
			cout << v4[i].second;
			arr[v4[i].second] = 1;
			break;
		}
	}
	

	return 0;
}