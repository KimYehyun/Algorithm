#include<iostream>
using namespace std;
typedef long long ll;
ll a, b, c;
ll solve(ll a, ll b) {
	if (b == 0)return 1;
	if (b % 2 == 0) {			
		ll res = solve(a, b / 2);
		return (res * res) % c;
	}
	else {
		return (a * solve(a, (b - 1))) % c;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> a >> b >> c;

	cout<< solve(a, b) % c;
	return 0;
}