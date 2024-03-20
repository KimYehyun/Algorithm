#include <bits/stdc++.h>
using namespace std;
int n,s,e;
int arr[10001];
bool visited[10001];
int cnt,cur;

bool bfs(){
    queue<pair<int,int>>q;
    q.push({s,0});
    visited[s]=1;
    while(!q.empty()){
        cur = q.front().first;
        cnt = q.front().second;
        q.pop();
        if(cur==e){
           return true;
        }
        for(int i=cur;i<=n;i+=arr[cur]){
            if(visited[i]==0){
                q.push({i,cnt+1});
                visited[i]=1;
            }
        }
        for(int i=cur;i>=1;i-=arr[cur]){
            if(visited[i]==0){
                q.push({i,cnt+1});
                visited[i]=1;
            }
        }
        
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0), 
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    cin >> s >> e;
    bool ans = bfs();
    if(ans == true) cout << cnt;
    else cout << -1;
    return 0;
}