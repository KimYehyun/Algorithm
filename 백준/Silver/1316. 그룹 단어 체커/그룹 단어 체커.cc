#include<iostream>
#include<set>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int  n;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		set<char>s;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (j >= 1 && str[j - 1] == str[j]) continue;
			if (s.find(str[j]) != s.end()) {
				cnt++;
				break;
			}
			else s.insert(str[j]);
		}
	}
	cout << n - cnt << "\n";
	return 0;
}