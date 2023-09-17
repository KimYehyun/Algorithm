#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(void) {

	int n;
	set<string>s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		sort(str.begin(), str.end());
		s.insert(str);
	}

	cout << s.size() << "\n";


	return 0;
}