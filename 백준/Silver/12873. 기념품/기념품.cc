#include<iostream>
#include<queue>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	queue<int>q;
	for (int i = 1; i <= n; i++) q.push(i);	
	long long a = 1;
	while (q.size()>1) {
		long long k = (a * a * a)-1;
		k %= q.size();
		for (long long i = 0; i < k;i++) {
			q.push(q.front());
			q.pop();
		}
		q.pop();
		a++;
	}
	cout << q.front();

	return 0;
}