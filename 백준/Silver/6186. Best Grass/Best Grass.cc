#include <bits/stdc++.h>
using namespace std;
int n,m;
char arr[101][101];

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
void bfs(int a, int b){
    queue<pair<int,int>>q;
    q.push({a,b});
    arr[a][b] = '.';
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if(nx>=0 && nx<n && ny>=0 && ny<m && arr[nx][ny]=='#'){
                q.push({nx,ny});
                arr[nx][ny] = '.';
            }
        }
    }

    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='#') {  
                bfs(i,j);
                cnt ++;
            }
        }
    }
    cout << cnt;
    return 0;
}