#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	stack <int> s;
	int n; 
	cin >> n;
	vector <char> answer;
	int number = 1;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (!s.empty() && s.top() == a) {
			s.pop();
			answer.push_back('-');
		}
		else if (number <= a) {
			for (int i = number; i <= a; i++) {
				s.push(number++);
				answer.push_back('+');
			}
			s.pop();
			answer.push_back('-');
		}
		else if (!s.empty() && s.top() > a) {
			cout << "NO";
			return 0;

		}

	}
	for (auto a : answer) {
		cout << a << "\n";
	}
	return 0;

}