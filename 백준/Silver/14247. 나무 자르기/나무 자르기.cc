#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int>>v;
void input(){
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        v.push_back({0,a});
    }
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        v[i].first = a;
    }
}
void solve(){
    sort(v.begin(),v.end());
    long long sum = 0;
    for(int i=n-1;i>=0;i--){
        sum += v[i].first*i + v[i].second;
    }
    cout << sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    input();
    solve();
    return 0;
}