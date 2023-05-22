#include<iostream>
#include<vector>
using namespace std;
int main(void) {

	int n, x;
	int ans = 0;
	vector<int>dp;
	dp.push_back(-1);
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		if (dp.back() < x) {
			dp.push_back(x);
			ans++;
		}
		else {
			auto it = lower_bound(dp.begin(), dp.end(), x);
			*it = x;
		}
	}

	printf("%d", ans);
	return 0;
}