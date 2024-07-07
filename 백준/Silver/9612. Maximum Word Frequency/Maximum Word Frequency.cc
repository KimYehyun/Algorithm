#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    map<string,int>m;
    cin >> n;
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        m[str]++;
    }
    int ans = 0;
    string ans_str="";
    for(auto k : m){
        if(ans <= k.second){
            ans = k.second;
            ans_str = k.first;
        } 
    }
    cout << ans_str <<" "<<ans;
    return 0;
}