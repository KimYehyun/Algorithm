#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>
#include<cmath>
using namespace std;
typedef long long ll;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	vector<ll>v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	deque<ll>dq(v.begin(), v.end());
	deque<ll>ans;
	ans.push_back(dq.back());
	dq.pop_back();
	bool aa = 0;
	while (!dq.empty()){
		if (aa == 0) {
			ll a = dq.front() - ans[0];
			ll b = dq.front()-ans[ans.size()-1];
			if (a > b) {
				ans.push_front(dq.front());
			}
			else {
				ans.push_back(dq.front());
			}
			dq.pop_front();
			aa = 1;
		}
		else{
			ll a = dq.back() - ans[0];
			ll b = dq.back() - ans[ans.size() - 1];
			if (a > b) {
				ans.push_front(dq.back());
			}
			else {
				ans.push_back(dq.back());
			}
			dq.pop_back();
			aa = 0;
		}	
	}

	ll result = ans[0];
	ll k = 0;
	for (int i = 1; i < v.size(); i++) {
		result += max(k, ans[i] - ans[i - 1]);
	}
	cout << result;

	return 0;
}