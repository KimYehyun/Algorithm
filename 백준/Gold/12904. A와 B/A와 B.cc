#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	string s1, s2;
	cin >> s1 >> s2;
	int i = s2.size()-1;
	while (s1.size() < s2.size()) {
		if (s2[i] == 'A') s2.pop_back();
		else {
			s2.pop_back();
			reverse(s2.begin(), s2.end());
		}
		i--;
	}
	if (s1 == s2) cout << 1;
	else cout << 0;
	return 0;
}
