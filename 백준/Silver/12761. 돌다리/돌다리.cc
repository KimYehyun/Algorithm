#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int A,B,N,M;
int visited[100001];
int dx[8];
void bfs(){
    queue<pair<int,int>>q;
    q.push({N,0});
    visited[N]=1;
    while(!q.empty()){
        int cur_x = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if(cur_x==M){
            cout << cnt <<"\n";
            return;
        }
           
        for(int i=0;i<6;i++){
            int nx = cur_x + dx[i];
            if(nx<0 || nx>100000) continue;
            if(visited[nx]==0){
                visited[nx]=1;
                q.push({nx,cnt+1});
            }
        }
        for(int i=6;i<8;i++){
            int nx = cur_x * dx[i];
            if(nx<0 || nx>100000) continue;
            if(visited[nx]==0){
                visited[nx]=1;
                q.push({nx,cnt+1});
            }
        }
    }
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> A >> B >> N >> M;
    dx[0]=1, dx[1]=-1, dx[2] = A, dx[3] = B, dx[4] = -A, dx[5] = -B, dx[6] = A, dx[7] = B; 
    bfs();
    
    return 0;
}