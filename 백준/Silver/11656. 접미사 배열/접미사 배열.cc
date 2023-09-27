#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string str;
	cin >> str;
	set<string>s;
	for (int i = 0; i < str.size(); i++) {
		string st = str.substr(i, str.size());
		s.insert(st);
	}
	for (auto a : s)
		cout << a << "\n";
	return 0;
}