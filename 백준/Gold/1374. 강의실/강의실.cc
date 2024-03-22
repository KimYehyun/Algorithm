#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int>>v;
priority_queue<int,vector<int>,greater<int>>pq;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin >> a >> b >> c;
        v.push_back({b,c});
    }
    sort(v.begin(),v.end());
    int result = 0;
    for(int i=0;i<n;i++){
        if(!pq.empty()){
            if(pq.top()>v[i].first) result++;
            else pq.pop();   
        }
        else result++;
        pq.push(v[i].second);
    }
    cout << result;
    return 0;
}