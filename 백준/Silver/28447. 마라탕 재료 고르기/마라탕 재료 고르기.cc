#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int arr[11][11];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, k,max_v = -2e9;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	vector<int>v;

	for (int i = 0; i < k; i++) v.push_back(1);
	for (int i = 0; i < n - k; i++) v.push_back(0);

	do {
		vector<int>s;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == 1) {
				s.push_back(i);
			}
		}
		
		int tmp = 0;
		for (int i = 0; i < s.size(); i++) {
			for (int j = i + 1; j < s.size(); j++) {
				tmp += (arr[s[i]][s[j]]);
			}
		}
		max_v = max(max_v, tmp);

		
	} while (prev_permutation(v.begin(), v.end()));
	
	cout << max_v;

	return 0;
}