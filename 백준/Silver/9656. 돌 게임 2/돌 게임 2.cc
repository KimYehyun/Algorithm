#include<bits/stdc++.h>
using namespace std;

int dp[1001];

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;

    dp[1]=0;
    dp[2]=1;
    dp[3]=0;

    for(int i=4;i<=n;i++){
        if(dp[i-1]==0||dp[i-3]==0) dp[i] = 1;
        else dp[i] = 0;
    }
    
    if(dp[n]==1) cout << "SK";
    else cout << "CY";
   

    return 0;
}