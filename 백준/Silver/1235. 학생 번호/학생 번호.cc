#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main(void) {

	int n;
	string str;
	vector<string>v;
	cin >> n;

	for (int k = 0; k < n; k++) {
		cin >> str;
		reverse(str.begin(), str.end());
		v.push_back(str);
	}

	int size = str.size();

	string s;
	set<string>st;
	bool a = 0;
	int i = 1;
	int j = 0;
	
	for (i = 1; i < size; i++) {
		for (j = 0; j < n; j++) {
			s = v[j].substr(0, i);
			st.insert(s);
		}
		if (st.size() == n) {
			a = 1;
			break;
		}
		st.clear();
	}
		
	cout << i << '\n';

	return 0;
}