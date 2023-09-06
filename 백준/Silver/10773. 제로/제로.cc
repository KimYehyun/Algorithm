#include<iostream>
#include<stack>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	stack<int>st;
	int k;
	long long sum = 0;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int a;
		cin >> a;
		if (a==0 && st.empty())
			continue;
		if (a == 0)
			st.pop();
		else
			st.push(a);
	}

	while(!st.empty()) {
		sum += st.top();
		st.pop();
	}
	
	cout << sum << "\n";
	return 0;
}