#include<iostream>
#include<queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, h, t;
	priority_queue<int>pq;
	cin >> n >> h >> t;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		pq.push(a);
	}
	int c = 0;
	while (c<t) {
		int top = pq.top();
		if (top == 1 || top < h) {
			break;
		}	
		pq.pop();
		pq.push(top / 2);	
		c++;
	}
	if(pq.top()< h) cout << "YES" << "\n" << c << "\n";
	else cout << "NO" << "\n" << pq.top() << "\n";
	return 0;
}