#include <bits/stdc++.h>
using namespace std;
int n,m,ans=2134567890;
int a[101];
int c[101];
int dp[101][10001];
void input(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        cin >> c[i];
    }
}

void solve(){
    for(int i = 1;i<=n;i++){
        for(int j = 0; j<=10001;j++){
            if(c[i]>j) dp[i][j]=dp[i-1][j];
            else{
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-c[i]]+a[i]);
                if(dp[i][j]>=m) ans = min(ans,j);
            }
        }
    }
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    input();
    solve();
    return 0;
}