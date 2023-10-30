#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	long long n;
	string s;
	vector<long long>v;
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> s;
		reverse(s.begin(), s.end());
		long long k = stoll(s);
		v.push_back(k);
	}
	sort(v.begin(), v.end());

	for (long long i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}

	return 0;
}