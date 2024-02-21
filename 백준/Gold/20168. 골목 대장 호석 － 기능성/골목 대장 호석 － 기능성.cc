#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,m,a,b,c;
int d[11][11];
int ans=2134567890;
bool visited[11];
void dfs(int cur, int cost, int max_v){
    if(cost > c) return;
    if(cur == b){
        ans = min(ans,max_v);
        return;
    }
    for(int i=1;i<=n;i++){
        if(!d[cur][i] || visited[i]==true) continue;
        visited[i]= true;
        dfs(i,cost+d[cur][i],max(max_v,d[cur][i]));
        visited[i]= false;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m >> a >> b >> c;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        d[u][v] = w;
        d[v][u] = w;
    }
    dfs(a,0,0);
    if(ans==2134567890) cout << -1;
    else cout << ans;
    return 0;
}