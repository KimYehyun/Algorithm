#include<iostream>
#include<set>
using namespace std;
int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	set<int>s;
	for (int i = 0; i < n; i++) {

		string str; int a;
		cin >> str;
		if (str == "add") {
			cin >> a;
			s.insert(a);
		}
		else if (str == "remove") {
			cin >> a;
			s.erase(a);
		}
		else if (str == "check") {
			cin >> a;
			if (s.find(a) != s.end()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (str == "toggle") {
			cin >> a;
			if (s.find(a) != s.end()) s.erase(a);
			else s.insert(a);
		}
		else if (str == "all") {
			for (int i = 1; i <= 20; i++) s.insert(i);
		}
		else if (str == "empty") {
			s.clear();
		}
	}
	return 0;
}