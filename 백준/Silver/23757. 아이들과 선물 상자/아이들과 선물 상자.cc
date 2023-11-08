#include<iostream>
#include<queue>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	long long n, m;
	priority_queue<long long>p;
	queue<long long>c;
	cin >> n >> m;
	for (long long i = 0; i < n; i++) {
		long long a;
		cin >> a;
		p.push(a);
	}
	for (long long i = 0; i < m; i++) {
		long long a;
		cin >> a;
		c.push(a);
	}

	bool chk = 0;
	while (!c.empty()) {
		if (c.front() <= p.top()) {
			long long r = p.top() - c.front();
			if (r != 0) {
				p.push(r);
			}
			c.pop();
			p.pop();
		}
		else {
			chk = 1;
			break;
		}
	}

	if (chk == 0) cout << "1" << "\n";
	else cout << "0" << "\n";

	return 0;
}