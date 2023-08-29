#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int T, n;
	vector<char>v;
	string s, f;
	cin >> T;

	for (int j = 0; j < T; j++) {
		cin >> f;
		for (int i = 0; i < f.length(); i++) v.push_back(f[i]);
		cin >> n;
		cin >> s;
		string d = ",";

		deque<string>a;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == '[' || s[j] == ',' || s[j] == ']') continue;

			string tmp = ""; int idx = j;
			while (s[idx] != ',' && s[idx] != ']') {
				tmp += s[idx];
				idx++;
			}
			a.push_back(tmp);
			j += (idx - j);
		}
		
		bool b = 0;
		bool b1 = 0;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == 'R')
				b = !b;
			else if (v[i] == 'D') {
				if (a.empty()) {
					cout << "error" << "\n";
					b1 = 1;
					break;
				}		
				if (b == 0)a.pop_front();
				else a.pop_back();
			}		
		}

		if (b1 == 1) {
			v.clear();
			continue;
		}
			
		int len = a.size();
		
		cout << "[";
		if (b == 0) {
			for (int i = 0; i < len; i++) {
				if (i == len - 1) {
					cout << a[i];
					break;
				}
				cout << a[i] << ",";
			}
		}
		else {
			for (int i = len-1; i >= 0; i--) {
				if (i == 0) {
					cout << a[i];
					break;
				}
				cout << a[i] << ",";
			}
		}
		
		cout << "]" << "\n";

		v.clear();
	}
	return 0;
}