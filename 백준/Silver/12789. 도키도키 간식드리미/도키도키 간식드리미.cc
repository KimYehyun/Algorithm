#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int n;
queue<int>q;
stack<int>s;

int main(void) {

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		q.push(a);
	}
	
	int key = 1;

	while (1) {
		bool a = 0;
		bool b = 0;
		bool c = 0;
		if (!q.empty() && q.front() == key) {
			q.pop();
			key++;
			a = 1;
		}
		else if (!s.empty() && s.top() == key) {
			s.pop();
			key++;
			b = 1;
		}
		else if(!q.empty()){
			s.push(q.front());
			q.pop();
			c = 1;
		}
	
		if (q.empty() && s.empty()) {
			cout << "Nice" << '\n';
			return 0;
		}
		else if (a == 0 && b == 0 && c == 0) {
			cout << "Sad" << '\n';
			return 0;
		}
		
	}
}