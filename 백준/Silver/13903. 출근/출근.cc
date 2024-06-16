#include<bits/stdc++.h>
using namespace std;

int r, c, n;
int arr[1000][1000]; 
int dist[1000][1000];
int dx[10];
int dy[10]; 
queue<pair<int,int>> q;

void bfs() {
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop(); 
        
        if (x == r - 1) {
            cout << dist[x][y];
            return;
        }

        for (int i = 0; i < n; i++) {
            int nx = x + dx[i], ny = y + dy[i];

            if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue; 
            
            if (dist[nx][ny] == -1 && arr[nx][ny]) {
                q.push({ nx, ny });
                dist[nx][ny] = dist[x][y] + 1;
            }
        }
    }
    cout << "-1";
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
            dist[i][j] = -1;
        }
    }

    cin >> n;
    for (int i = 0; i < n; i++) { 
        cin >> dx[i] >> dy[i]; 
    }

    for (int i = 0; i < c; i++) { 
        if (arr[0][i]) {
            q.push({ 0, i });
            dist[0][i] = 0;
        }
    }
    bfs();

    return 0;
}