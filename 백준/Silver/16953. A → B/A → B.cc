#include<iostream>
#include<queue>
using namespace std;
typedef long long ll;
ll n, m;
int bfs(){
	queue<pair<ll,ll>>q;
	q.push({ n,1 });
	
	while (!q.empty()) {
		ll cur = q.front().first;
		ll cost = q.front().second;
		q.pop();
		if (cur == m) return cost;	
		if(cur*2 <= m) q.push({ cur*2,cost + 1 });
		if(cur*10+1<=m) q.push({ cur*10+1,cost + 1 });
	}
	return -1;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> m;
	ll ans = bfs();
	cout << ans << "\n";

	return 0;
}