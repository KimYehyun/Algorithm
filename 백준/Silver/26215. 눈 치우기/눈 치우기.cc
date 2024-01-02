#include<iostream>
#include<set>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	multiset<int,greater<int>>ms;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		ms.insert(a);
	}
	int ans = 0;
	while (!ms.empty()) {
		
		if (ms.size() == 1) {
			int a = *ms.begin() - 1;
			if(a)
				ms.insert(a);
			ms.erase(ms.begin());
			ans++;
		}
		else {
			int a = *ms.begin() - 1;
			int b = *(++ms.begin()) - 1;
			ms.erase(++ms.begin());
			ms.erase(ms.begin());
			if (a)
				ms.insert(a);
			if (b)
				ms.insert(b);
			ans++;
		}	
	}

	if (ans > 1440) cout << -1;
	else cout << ans;
	return 0;
}