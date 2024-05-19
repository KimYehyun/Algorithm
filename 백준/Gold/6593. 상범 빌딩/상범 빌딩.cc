#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

struct node {
    int height;
    int rows;
    int cols;
};

int dx[6] = {0, 0, -1, 1, 0, 0};
int dy[6] = {-1, 1, 0, 0, 0, 0}; 
int dz[6] = {0, 0, 0, 0, -1, 1}; 

int L, R, C;

char arr[31][31][31];
queue<node> q;
int visited[31][31][31]; 

int bfs() {
    
    while(!q.empty()) {
        int cur_h = q.front().height;
        int cur_r = q.front().rows;
        int cur_c = q.front().cols;
        q.pop();

        if (arr[cur_h][cur_r][cur_c] == 'E') return visited[cur_h][cur_r][cur_c];

        for (int i = 0; i < 6; i++) {
            int next_h = cur_h + dz[i];
            int next_r = cur_r + dy[i];
            int next_c = cur_c + dx[i];

            if (next_h < 0 || next_h >= L || next_r < 0 || next_r >= R || next_c < 0 || next_c >= C) continue;

            if (visited[next_h][next_r][next_c] == 0 && arr[next_h][next_r][next_c] != '#') {
                q.push({next_h,next_r,next_c});
                visited[next_h][next_r][next_c] = visited[cur_h][cur_r][cur_c] + 1;
            }
        }
    }

   return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    while(1) {
        
        cin >> L >> R >> C;
        if (L == 0 && R == 0 && C == 0) break;
        memset(visited,0,sizeof(visited));
        while(!q.empty()){
            q.pop();
        }
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < R; j++) {
                for (int k = 0; k < C; k++) {
                    char c;
                    cin >> c;
                    arr[i][j][k] = c;
                    if (c == 'S') {   
                        q.push({i,j,k});
                    }
                }
            }
        }

        int result = bfs();
        if (result != 0) {
            cout << "Escaped in " << result << " minute(s)." << "\n";
        } else {
            cout << "Trapped!" << "\n";
        }

    }

    return 0;
}