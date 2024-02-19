#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long n, count1, a, sum = 0;
vector<long long>v;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> count1;
		sum = 0;
		for (int j = 0; j < count1; j++) {
			cin >> a;
			sum += a;
		}
		v.push_back(sum);
	}

	sort(v.begin(), v.end());

	for (int i = 1; i < n; i++) {
		v[i] = v[i - 1] + v[i];
	}
	long long result = 0;
	for (auto k : v) {
		result += k;
	}
	cout << result << "\n";

	return 0;
}