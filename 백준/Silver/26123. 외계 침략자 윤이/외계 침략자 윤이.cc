#include <iostream>
#include<algorithm>
#include <map>
using namespace std;
typedef long long ll;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n, m, max_v = 0;
    map<ll, ll>ma;
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        ma[a]++;
        if (max_v < a) max_v = a;
    }
    ll ans = 0;
    for (ll i = 0; i < m; i++) {
        ans += ma[max_v];
        if (max_v == 1) break;
        else {
            ma[max_v-1] += ma[max_v];
            max_v--;
        }
    }
    cout << ans << "\n";

    return 0;
}