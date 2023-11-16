#include<iostream>
#include<algorithm>
using namespace std;
int n;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		sort(str.begin(), str.end());
		do {
			for (auto it = str.begin(); it != str.end(); it++)
				cout << *it;
			cout << "\n";
		} while (next_permutation(str.begin(), str.end()));
	}

	return 0;
}