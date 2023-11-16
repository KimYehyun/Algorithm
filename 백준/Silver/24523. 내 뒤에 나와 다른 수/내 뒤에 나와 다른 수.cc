#include<iostream>
#include<vector>
using namespace std;
long long n;
vector<long long>v;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	v.push_back(0);
	for (long long i = 1; i <= n; i++) {
		long long a; cin >> a;
		v.push_back(a);
	}

	int k = 1;
	for (long long i = 1; i <= n; i++) {
		while (k <= n && v[i] == v[k])
		{
			k++;
		}

		if (k > n)
		{
			cout << -1 << " ";
		}
		else
		{
			cout << k << " ";
		}
	}

	return 0;
}