#include<iostream>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	for (int tc = 0; tc < t; tc++) {
		int n;
		cin >> n;
		string str;
		cin >> str;
		for (int i = 1; i < n; i++) {
			string a;
			cin >> a;
			if (str < a) str += a;
			else {
				a += str;
				str = a;
			}
		}
		cout << str << "\n";
	}

	return 0;
}