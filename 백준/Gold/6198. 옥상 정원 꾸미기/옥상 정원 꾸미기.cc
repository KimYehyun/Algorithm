#include<iostream>
#include<stack>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	long long ans = 0;
	cin >> n;
	stack<int>s;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (s.empty()) {
			s.push(a);
			continue;
		}
		while (!s.empty() && s.top() <= a) 
			s.pop();
		ans += s.size();
		s.push(a);
	
	}
	cout << ans << "\n";
	return 0;
}