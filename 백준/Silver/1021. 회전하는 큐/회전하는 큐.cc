#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main(void) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	int n, m, cnt = 0;
	deque<int>dq;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		dq.push_back(i);
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		int idx = find(dq.begin(), dq.end(), a)-dq.begin();
		if (idx <= dq.size()/2) {
			for (int i = 0; i < idx; i++) {
				int k = dq.front();
				dq.pop_front();
				dq.push_back(k);
				cnt++;
			}
		}
		else {
			for (int i = 0; i <dq.size()-idx; i++) {
				int k = dq.back();
				dq.pop_back();
				dq.push_front(k);
				cnt++;
			}
		}

		dq.pop_front();

	}
	cout << cnt << "\n";
	return 0;
}