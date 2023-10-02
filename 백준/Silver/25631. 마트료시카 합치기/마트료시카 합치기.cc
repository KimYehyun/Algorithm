#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	int n;
	deque<int>dq;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		dq.push_back(a);
	}
	sort(dq.begin(), dq.end());
	int cnt = 0;
	while (!dq.empty()) {
		cnt++;
		int cur = dq.front();
		dq.pop_front();
		int size = dq.size();
		for (int i = 0; i < size; i++) {
			if (dq.front() > cur) {
				cur = dq.front();
				dq.pop_front();	
			}
			else {
				int k = dq.front();
				dq.pop_front();
				dq.push_back(k);
			}
		}	
	}


	cout << cnt << "\n";

	return 0;
}