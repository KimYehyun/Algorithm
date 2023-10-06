#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<int>v;
	int n,m,a,b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	cin >> m;
	for (int j = 0; j < m; j++) {
		cin >> b;
		cout << binary_search(v.begin(), v.end(), b) << " ";
	}
	return 0;

}