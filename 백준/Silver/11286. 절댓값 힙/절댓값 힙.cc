#include<iostream>
#include<queue>
#include<algorithm>
#include<cstdlib>
using namespace std;

int n;
priority_queue < pair<int, int>, vector<pair<int, int>>, greater < pair<int,int> >> pq;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b = 1;
		cin >> a;
		if (a == 0) {
			if (pq.empty())
				cout << "0" << '\n';
			else if (pq.top().second == 0){
				cout << pq.top().first * -1 << '\n';
				pq.pop();
			}
			else {
				cout << pq.top().first << '\n';
				pq.pop();
			}
				
		}
		else if (a < 0) {
			b = 0;
			a = abs(a);
			pq.push({ a,b });
		}
		else
			pq.push({ a,b });
				
	}
	return 0;
}