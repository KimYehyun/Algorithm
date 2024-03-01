#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    for(int tc = 0; tc<t; tc++){  
        int n;
        cin >> n;
       vector<int>v(n+1);
        for(int i=1;i<=n;i++){
            cin >> v[i];
        }
        int cnt = 1;
        int cur = v[1]; 
        while(cur != n && cnt <= n){
            cur = v[cur];
            cnt++;
        }
        if(cnt > n) cnt = 0;
        cout << cnt <<"\n";
    }
    return 0;
}