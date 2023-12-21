#include<iostream>
#include<queue>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	priority_queue<int,vector<int>,greater<>>q;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		q.push(a);
	}
	if (n == 1) {
		cout << 0 << "\n";
	}
	else {
		int ans = 0;
		while (q.size() != 1) {
			int key = q.top();
			q.pop();
			key += q.top();
			q.pop();
			q.push(key);
			ans += key;
		}
		cout << ans << "\n";
	}
	
	return 0;
}