#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	vector<int>v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	
	sort(v.begin(), v.end(), greater<int>());

	long long sum = 0;
	int cnt = 1;
	for (int i = 0; i < v.size(); i++) {
		if (cnt == 3) {
			cnt = 1;
			continue;
		}
		sum += v[i];
		cnt++;
	}
	cout << sum << "\n";


	return 0;
}