#include<iostream>
#include<vector>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int cnt = 1;
	for (int i = 0; i < v.size()-1; i++) {
		if (v[i] <= v[i + 1]) cnt++;
	}
	cout << cnt << "\n";
	return 0;
}