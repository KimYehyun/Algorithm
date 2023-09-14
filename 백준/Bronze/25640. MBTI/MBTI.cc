#include<iostream>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	int n, cnt = 0;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == s)
			cnt++;
	}
	cout << cnt << "\n";
	return 0;
}