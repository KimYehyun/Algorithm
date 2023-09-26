#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(void) {

	int n;
	stack<int>s;
	stack<int>s1;
	stack<int>result;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s.push(a);
	}
	while (!s.empty()) {
		if (s1.empty()) {
			result.push(-1);
			s1.push(s.top());
			s.pop();
		}
		else if (s.top() < s1.top()) {
			result.push(s1.top());
			s1.push(s.top());
			s.pop();
		}
		else s1.pop();
	}

	while (!result.empty()) {
		cout << result.top() << " ";
		result.pop();
	}
	
	return 0;
}