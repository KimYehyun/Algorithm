#include <bits/stdc++.h>
using namespace std;

int max_val = 0;
int n;
char arr[51][51];
int visited[51];

void bfs(int a){
    memset(visited, 0, sizeof(visited));
    queue<pair<int,int>> q;
    q.push({a, 0});
    visited[a] = 1;
    int val = 0;
    int depth = 0;
    while(!q.empty()){
        int cur = q.front().first;
        int depth = q.front().second;
        q.pop();
        if(depth > 1) continue;
        for(int i=0; i<n; i++){
            if(arr[cur][i] == 'Y' && visited[i] == 0){
                visited[i] = 1;
                val++;
                q.push({i, depth+1});
            }
        }
    }
    if(val > max_val) max_val = val;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        bfs(i);
    }
    cout << max_val << "\n";
    return 0;
}