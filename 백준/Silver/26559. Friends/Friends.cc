#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int>&a, pair<string,int>&b){
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    for(int tc= 0; tc<t;tc++){
        vector<pair<string,int>>v;
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            string str; int num;
            cin >> str >> num;
            v.push_back({str,num});
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++){
            if(i==n-1) cout << v[i].first<<"\n";
            else cout << v[i].first <<", ";
        }
    }
    return 0;
}