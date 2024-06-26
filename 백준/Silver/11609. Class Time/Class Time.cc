#include <bits/stdc++.h>
using namespace std;
int n;  
vector<pair<string,string>>v;

bool cmp (pair<string,string>&a, pair<string,string>&b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
  
    cin >> n;
    for(int i=0;i<n;i++){
        string s1,s2;
        cin >> s1 >> s2;
        v.push_back({s1,s2});        
    }
    sort(v.begin(),v.end(),cmp);
    for(auto a : v){
        cout << a.first <<" "<<a.second <<"\n";
    }
    return 0;
}