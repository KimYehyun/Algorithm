#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    for(int tc = 0; tc<t; tc++){
        int n;
        cin >> n;
        vector<pair<int,int>>v;
        priority_queue<int,vector<int>,greater<>>pq_A;
        priority_queue<int>pq_B;
        
        for(int i=0;i<n;i++){
            int k;
            cin >> k;
            if(k%2==0){
                pq_B.push(k);
                v.push_back({0,0});
            }
            else{
                pq_A.push(k);
                v.push_back({1,0});
            }
        }

        for(int i=0;i<n;i++){
            if(v[i].first==0) {
                v[i].second = pq_B.top();
                pq_B.pop();
            }
            else{
                 v[i].second = pq_A.top();
                pq_A.pop();
            }
        }
        cout <<"Case #"<<tc+1<<": ";
        for(int i=0;i<n;i++) {
            cout << v[i].second <<" ";
        }
        cout <<"\n";    
    }
    return 0;
}