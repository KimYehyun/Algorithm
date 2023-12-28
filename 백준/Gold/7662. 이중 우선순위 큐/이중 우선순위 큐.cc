#include<iostream>
#include<set>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t,k,n;
	char a; 
	cin >> t;
	for (int tc = 0; tc < t; tc++) {
		cin >> k;
		multiset<int>s;
		for (int i = 0; i < k; i++) {
			cin >> a;
			if (a == 'I') {
				cin >> n;
				s.insert(n);
			}
			else if (a == 'D') {
				cin >> n;
				if (s.empty()) continue;
				if (n == 1) {
					s.erase(--s.end());
				}
				else {
					s.erase(s.begin());
				}
			}
		}

		if (s.empty()) {
			cout << "EMPTY" << "\n";
		}
		else if (s.size()==1) {
			cout << *s.begin() << " " << *s.begin() << "\n";
		}
		else {
			cout << *(--s.end()) <<" "<< * s.begin() << "\n";
		}

	}

	return 0;
}