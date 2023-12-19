#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int n;
queue<int>q;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	int max_v = 0, min_v = 2134567890;

	for (int i = 0; i < n; i++) {
		int a,b;
		cin >> a;
		if (a == 1) {
			cin >> b;
			q.push(b);
			if (max_v < q.size()) {
				max_v = q.size();
				min_v = q.back();	
			}
			else if (max_v == q.size()) {
				if (min_v > q.back()) {
					min_v = q.back();
				}
			}
		}
		else {
			q.pop();	
		}
	}
	
	cout << max_v <<" " << min_v << "\n";
	return 0;
}