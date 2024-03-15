#include <bits/stdc++.h>
using namespace std;
int n;
deque<pair<string,int>>dq;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        string c; int a;
        cin >> c >> a;
        dq.push_back({c,a%100});
    }
    while(dq.size()>1){
        auto cur = dq.front(); 
        dq.pop_front(); 
        for(int i =0;i<cur.second-1;i++){
            dq.push_back(dq.front());
            dq.pop_front();
        }
        dq.pop_front();       
    }
    cout << dq.front().first;
    return 0;
}