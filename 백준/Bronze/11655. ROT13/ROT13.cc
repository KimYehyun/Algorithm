#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	map<char, char>m;
	
	for (int i = 65; i <= 77; i++) {
		m[i] = i + 13;
		m[i + 13] = i;
		m[i + 32] = i + 45;
		m[i + 45] = i + 32;
	}

	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') cout << ' ';
		else if (s[i] >= '0' && s[i] <= '9') cout<< s[i];
		else cout << m[s[i]];
	}
	return 0;
}