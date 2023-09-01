#include <iostream>
#include <queue>

using namespace std;

struct Node {
    int x, y, cost;
    bool flag;
};

int n, m, t;
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int board[100][100];
bool visited[2][100][100];

void input() {
    cin >> n >> m >> t;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }
}

int bfs() {
    queue<Node> q;
    q.push({ 0, 0, 0, 0 });
    visited[0][0][0] = true;

    while (!q.empty()) {
        auto now = q.front();
        q.pop();

        if (now.cost > t) return -1;
        if (now.x == n - 1 && now.y == m - 1) return now.cost;

        for (int i = 0; i < 4; i++) {
            int nx = now.x + dx[i];
            int ny = now.y + dy[i];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (!now.flag) {
                if (board[nx][ny] == 2 && !visited[0][nx][ny]) {
                    visited[0][nx][ny] = true;
                    q.push({ nx, ny, now.cost + 1, 1 });
                }
                else if (board[nx][ny] == 0 && !visited[0][nx][ny]) {
                    visited[0][nx][ny] = true;
                    q.push({ nx, ny, now.cost + 1, 0 });
                }
            }
            else {
                if (!visited[1][nx][ny]) {
                    visited[1][nx][ny] = true;
                    q.push({ nx, ny, now.cost + 1, 1 });
                }
            }
        }
    }
    return -1;
}

void solve() {
    int result = bfs();
    if (result == -1) cout << "Fail\n";
    else cout << result << '\n';
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    input();
    solve();
    return 0;
}