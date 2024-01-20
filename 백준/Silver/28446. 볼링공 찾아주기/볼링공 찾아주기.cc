#include<iostream>
#include<unordered_map>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	unordered_map<int, int>m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a == 1) {
			int b, c;
			cin >> b >> c;
			m[c] = b;
		}
		else {
			int d;
			cin >> d;
			cout << m[d] << "\n";
		}
	}

	return 0;
}