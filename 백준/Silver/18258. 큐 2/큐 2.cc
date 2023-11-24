#include<iostream>
#include<queue>
using namespace std;
queue<int>q;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int a;
			cin >> a;
			q.push(a);
		}
		else if (s == "front") {
			if (q.size() == 0) cout << -1 << "\n";
			else cout << q.front() << "\n";
		}
		else if (s == "pop") {
			if (q.size() == 0) cout << -1 << "\n";
			else {
				cout << q.front()<<"\n";
				q.pop();
			}
		}
		else if (s == "size") {
			cout << q.size()<<"\n";
		}
		else if (s == "empty") {
			if (q.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (s == "back") {
			if (q.size() == 0) cout << -1 << "\n";
			else cout << q.back() << "\n";
		}
	}

	return 0;
}