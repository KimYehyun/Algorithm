#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string str1, str2;
	stack<int>s;
	cin >> str1 >> str2;
	int a = str1.size()-1;
	int b = str2.size()-1;
	if (a < b) {
		for (int i = 0; i < str1.size(); i++) {
			s.push((str1[a] - '0') + (str2[b] - '0'));
			a--;  b--;
		}
		for (int i = b; b >= 0; b--) {
			s.push(str2[b]-'0');
		}

	}
	else if(a>b) {
		for (int i = 0; i < str2.size(); i++) {
			s.push((str1[a] - '0') + (str2[b] - '0'));
			a--;  b--;
		}
		for (int i = a; a >= 0; a--) {
			s.push(str1[a] - '0');
		}

	}
	else {
		for (int i = a; i >= 0; i--) {
			s.push((str1[i] - '0') + (str2[i] - '0'));
		}
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}

	return 0;
}