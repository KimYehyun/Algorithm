#include<iostream>
#include<stack>

using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	stack<int>s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a == 1) {
			int b;
			cin >> b;
			s.push(b);
		}
		else if (a == 2) {
			if (s.empty()) cout << -1 << "\n";
			else {
				cout << s.top()<<"\n";
				s.pop();
				
			}
		}
		else if (a == 3) {
			cout << s.size() << "\n";
		}
		else if (a == 4) {
			if (s.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (a == 5) {
			if (s.empty()) cout << -1 << "\n";
			else cout << s.top() << "\n";
		}
	}

	return 0;
}