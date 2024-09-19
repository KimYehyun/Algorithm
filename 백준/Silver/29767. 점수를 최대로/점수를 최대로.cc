#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll add[300001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,k;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        add[i] = add[i-1] + a;
    }

    sort(add+1,add+n+1,greater<>());

    ll ans = 0;
    for(int i=1;i<=k;i++){
        ans += add[i];
    }
    cout << ans;

    return 0;
}