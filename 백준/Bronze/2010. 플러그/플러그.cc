#include<iostream>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,m,ans =0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        ans += (m - 1);
    }
    cout << ans+1;

    return 0;
}