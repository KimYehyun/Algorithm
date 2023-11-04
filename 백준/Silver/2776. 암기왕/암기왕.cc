#include<iostream>
#include<set>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t,n1,n2;
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		set<int>s;
		cin >> n1;
		for (int j = 0; j < n1; j++) {
			int a;
			cin >> a;
			s.insert(a);
		}
		cin >> n2;
		for (int k = 0; k < n2; k++) {
			int b;
			cin >> b;
			if (s.find(b) != s.end()) {
				cout << "1" << "\n";
			}
			else {
				cout << "0"<<"\n";
			}
		}
	}
	return 0;
}
