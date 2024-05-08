#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,r,ans;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cin >> n >> r;
    ans = r*2+(n-1);
    cout << ans;  
    return 0;
}