#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[2][100001];
        int dp[2][100001];
        for(int i=1;i<=n;i++){
            cin >> arr[0][i];
        }
        for(int i=1;i<=n;i++){
            cin >> arr[1][i];
        }
        dp[0][0] = 0;
        dp[1][0] = 0;
        dp[0][1]=arr[0][1];
        dp[1][1]=arr[1][1];
        
        for(int i=2;i<=n;i++){
            dp[0][i] = max(dp[1][i-1]+arr[0][i], dp[1][i-2]+arr[0][i]);
            dp[1][i] = max(dp[0][i-1]+arr[1][i], dp[0][i-2]+arr[1][i]);
        }
        
        cout << max(dp[0][n],dp[1][n])<<"\n";
    
    }
    return 0;
}