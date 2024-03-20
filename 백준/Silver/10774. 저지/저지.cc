#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), 
    cin.tie(0); cout.tie(0);
    int n,m;
    cin >> n >> m;
    map<int,int>ma;
    for(int i=1;i<=n;i++){
        char a;
        int j;
        cin >> a;
        if(a=='S') j=1;
        else if(a=='M') j=2;
        else j=3;
        ma[i] = j;
    }
    vector<pair<int,int>>key;
    for(int i=1;i<=m;i++){
        int b, d; char c;
        cin >> c >> b;
        if(c=='S') d=1;
        else if(c=='M') d=2;
        else d=3;
        key.push_back({b,d});
    }
    sort(key.begin(),key.end());
    int cnt = 0;
    for(int i=0,j=0;i<m;i++){
        if(ma[key[i].first]>=key[i].second) {
            cnt++;
            ma.erase(key[i].first);
        }    
    }
    cout << cnt;
    return 0;
}