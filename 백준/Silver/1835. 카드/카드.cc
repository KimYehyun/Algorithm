#include <iostream>
#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int>>q;
vector<pair<int,int>>v;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        q.push({i,0});
    }
    int cur = 1;
    while(!q.empty()){
        if(q.size()==1){
            q.front().second = cur;
            v.push_back(q.front());
            break;
        }
        for(int i=0;i<cur;i++){
            q.push(q.front());
            q.pop();   
        }
        q.front().second = cur;
        v.push_back(q.front());
        q.pop();
        cur++;
    }
      
    sort(v.begin(),v.end());
    for(auto a : v){
        cout << a.second<<" ";
    }
    return 0;
}