#include <bits/stdc++.h>
using namespace std;
string color[4];
string result[2];
set<pair<string,string>>m;
void dfs(int cnt){
    if(cnt==2){
        m.insert({result[0],result[1]});
        return;
    }
    for(int i=0;i<4;i++){
        result[cnt] = color[i];
        dfs(cnt+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    for(int i=0;i<4;i++){
        cin >> color[i];
    } 
    dfs(0);
    for(auto a:m){
        cout << a.first<<" "<<a.second<<"\n";
    }
     
    return 0;
}