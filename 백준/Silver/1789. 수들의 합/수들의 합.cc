#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
ll sum, n;
vector<ll>v;
int main(void) {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n;

	int i = 0;
	while (sum <= n) {
		sum +=i;
		v.push_back(sum);
		i++;
	}
	auto ans = lower_bound(v.begin(), v.end(), n)-v.begin();
	if (v[ans] == n) cout << ans << "\n";
	else cout << ans-1 << "\n";
	return 0;
}