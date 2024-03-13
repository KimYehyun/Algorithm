#include <iostream>
#include<queue>
#include<string.h>
using namespace std;

int n, Fx, Fy, cnt;
int dx[7] = { 0,-1,0,-1,-1,1,1 }; //1
int dy[7] = { 1,0,-1,1,-1,1,-1 }; //0
char arr[2001][2001];
bool visited[2001][2001];

void bfs(int i, int j) {
    queue<pair<int, int>>q;
    visited[i][j] = 1;
    q.push({ i,j });

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 7; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && visited[nx][ny] == 0 && arr[nx][ny] != '#') {
                visited[nx][ny] = 1;
                cnt++;
                q.push({ nx,ny });
            }
        }
    }
    return;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'F') {
                Fx = i;
                Fy = j;
            }
        }
    }

    bfs(Fx, Fy);

    cout << cnt;
    return 0;
}