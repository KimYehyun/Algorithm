#include<iostream>
#include<list>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string str="";
	cin >> str;
	int n;
	cin >> n;
	list<char>l(str.begin(), str.end());
	auto cs = l.end();
	for (int i = 0; i < n; i++) {
		char a;
		cin >> a;
		if (a == 'L') {
			if (cs == l.begin()) continue;
			else cs--;
		}
		else if (a == 'D') {
			if (cs == l.end()) continue;
			else cs++;
		}
		else if (a == 'B') {
			if (cs == l.begin())continue;
			else cs = l.erase(--cs);
		}
		else if (a == 'P') {
			char b;
			cin >> b;
			l.insert(cs, b);
		}

	}
	
	for (auto k : l)
		cout << k;

	return 0;
}