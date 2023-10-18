#include<iostream>
#include<set>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	set<long long>s;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		long long a;
		cin >> a;
		s.insert(a);
	}
	for (int j = 0; j < m; j++) {
		long long b;
		cin >> b;
		s.erase(b);
	}

	cout << s.size() << "\n";
	if (s.size() != 0) {
		for (auto r : s)
			cout << r << " ";
	}

	return 0;
}