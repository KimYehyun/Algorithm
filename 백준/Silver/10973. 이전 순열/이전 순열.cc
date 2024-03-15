#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    bool flag  = prev_permutation(v.begin(),v.end());
    if(!flag) cout <<"-1";
    else{
        for(int i=0;i<n;i++) cout << v[i]<<" ";
    }
    return 0;
}