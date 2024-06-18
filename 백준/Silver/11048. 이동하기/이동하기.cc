#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[1001][1001];
int visited[1001][1001];
int dx[3] = {1,0,1};
int dy[3] = {0,1,1};
void bfs(){
   visited[1][1] = arr[1][1];
   for(int x = 1;x<=n; x++){
       for(int y = 1; y<=m;y++){
            for(int i=0;i<3;i++){
                int nx = dx[i] + x;
                int ny = dy[i] + y;
                if(nx>=1 && nx<=n && ny>=1 && ny<=m) {
                    int candy = arr[nx][ny];
                    if(visited[x][y]+candy > visited[nx][ny]){
                        visited[nx][ny] = visited[x][y] + candy;
                    }
                }
            }
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> arr[i][j];
        }
    }
    bfs();
    cout << visited[n][m];
    return 0;
}