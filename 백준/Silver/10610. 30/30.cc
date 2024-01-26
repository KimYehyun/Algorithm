#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string str;
	cin >> str;
	sort(str.begin(), str.end(),greater<>());
	if (str[str.size() - 1] != '0') {
		cout << -1;
		return 0;
	}
	long long sum = 0;
	for (int i = 0; i < str.size(); i++) {
		sum += str[i]-'0';
	}
	if (sum % 3 == 0) {
		cout << str << "\n";
	}
	else {
		cout << -1 << "\n";
	}
	return 0;
}
