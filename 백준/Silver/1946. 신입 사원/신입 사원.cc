#include <bits/stdc++.h>
using namespace std;
int t,n;
vector<pair<int,int>>v;

void solve(){
    sort(v.begin(),v.end());
    int max_v = v[0].second;
    int ans = 1;
    for(int i=1;i<n;i++){
        if(v[i].second < max_v){
            ans++;
            max_v = v[i].second;
        }
    }
    cout << ans <<"\n";
    
}

void input(){
   cin >> t;
    for(int tc = 0; tc<t;tc++){
        cin >> n;
        v.clear();
        for(int i=0;i<n;i++){
            int a, b;
            cin >> a >> b;
            v.push_back({a,b});
        }
        solve();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    input();
    return 0;
}