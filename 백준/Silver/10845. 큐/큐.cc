#include <iostream>
#include <queue>
using namespace std;

int main(void)
{

	int n;
	queue<int> q;
	string op;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> op;
		if (op == "push") {
			int x;
			cin >> x;
			q.push(x);
		}
		else if (op == "pop") {
			if (q.empty()) cout << -1 << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (op == "size") {
			cout << q.size() << '\n';
		}
		else if (op == "empty") {
			cout << q.empty() << '\n';
		}
		else if (op == "front") {
			if (q.empty()) cout << -1 << '\n';
			else cout << q.front() << '\n';
		}
		else if (op == "back") {
			if (q.empty()) cout << -1 << '\n';
			else cout << q.back() << '\n';
		}
	}

	return 0;
}