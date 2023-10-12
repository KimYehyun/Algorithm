#include<iostream>
#include<stack>
#include<vector>
using namespace std;
stack<int>s[7];
int main(void) {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m, cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (s[a].empty()) {
			s[a].push(b);
			cnt++;
			continue;
		}
		if (s[a].top() < b) {
			s[a].push(b);
			cnt++;
		}
		else if( s[a].top()>b) {
			while (s[a].top() > b) {
				s[a].pop();
				cnt++;
				if (s[a].empty()) {
					s[a].push(b);
					cnt++;
				}
			}
		}
		if (s[a].top() < b) {
			s[a].push(b);
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}