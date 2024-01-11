#include<iostream>
#include<map>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	map<char, int>m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
        char a;
		cin >> a;
		if (n % 2 == 1 && i == n / 2) continue;
		m[a]++;
	}
	bool b = 0;
	for (auto k : m) {
		if (k.second % 2 != 0) {
			b = 1;
		}
	}
	if (b == 0) cout << "Yes";
	else cout << "No";
	
	return 0;
}