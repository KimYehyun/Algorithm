#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long n,m,min_v=2134567890;
vector<long long>v;
int main(void) {

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		long long a;
		cin >> a;
		v.push_back(a);
		min_v = max(min_v, a);
	}
	
	long long left = 1;
	long long right = min_v;
	long long max_v = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;
		long long  sum = 0;
		for (int i = 0; i < n; i++) {
			sum += v[i] / mid;
		}
		if (sum < m) {
			right = mid -1;
		}
		else {
			max_v = max(max_v, mid);
			left = mid + 1;
		}
	}
	cout << max_v << "\n";
	return 0;
}