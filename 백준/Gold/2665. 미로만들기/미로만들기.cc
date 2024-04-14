#include<bits/stdc++.h>
using namespace std;
int n;
int arr[51][51];
int visited[51][51]; 
int dx[] = {0, 0, -1, 1}; 
int dy[] = {1, -1, 0, 0}; 
 
void bfs(){
    queue<pair<int, int>> q;
    q.push({0,0});
    visited[0][0] = 0; 
    while(!q.empty()){
        int x = q.front().first; 
        int y = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++){
            int nx = x + dx[i]; 
            int ny = y + dy[i]; 
            if(nx >=0 && nx < n && ny>=0 && ny <n){
                if(arr[nx][ny] == 1){ 
                    if(visited[nx][ny] > visited[x][y]){
                        visited[nx][ny] = visited[x][y];
                        q.push({nx,ny});
                    } 
                }
                else{ 
                    if(visited[nx][ny] > visited[x][y]+1){
                        visited[nx][ny] = visited[x][y]+1;
                        q.push({nx,ny});
                    } 
                }
            }
        }  
    }     
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    char a;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a;
            arr[i][j] = a - '0'; 
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            visited[i][j] = 2134567890; 
        }
    }
    bfs();
    cout << visited[n - 1][n - 1];
 
    return 0;
}