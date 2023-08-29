#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {

	int n;
	vector<pair<int,int>>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ b,a });
	}
	sort(v.begin(), v.end(),greater<pair<int,int>>());

	int result = v[0].first - v[0].second;

	for (int i = 1; i < v.size(); i++) {
		if (result >= v[i].first) {
			result = v[i].first;
			result -= v[i].second;
		}
		else {
			result -= v[i].second;
		}
	}

	cout << result << "\n";

	return 0;
}