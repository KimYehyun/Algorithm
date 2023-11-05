#include<iostream>
#include<queue>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	priority_queue<int>q;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a == 0) {
			if (q.empty()) cout << -1 << "\n";
			else {
				cout << q.top()<<"\n";
				q.pop();
			}
		}
		else {
			for (int j = 0; j < a; j++) {
				int  b;
				cin >> b;
				q.push(b);
			}
		}
	}
	return 0;
}