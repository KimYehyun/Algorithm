#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	vector<pair<long long, long long>>v;
	long long n;
	cin >> n;
	long long x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	long long a, k1, k2;
	for (long long i = 0; i < n; i++) {
		long long sum = 0;
		k1 = x1; k2 = y1;
		cin >> a;
		for (long long j = 0; j < a; j++) {
			long long r1, r2;
			cin >> r1 >> r2;
			sum += abs(k1 - r1) + abs(k2 - r2);
			k1 = r1; k2 = r2;
		}
		sum += abs(k1 - x2) + abs(k2 - y2);
		v.push_back({ sum,i + 1 });
	}
	sort(v.begin(), v.end());
	cout << v[0].second << "\n";

	return 0;
}