#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,m,ans = 0;
    cin >> n >> m;
    
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        int cnt =0;
        for(int j=0;j<str.size();j++){
            if(str[j]=='O')cnt++;
        }
        if(cnt>m/2) ans++;
    }
    cout << ans;
    return 0;
}