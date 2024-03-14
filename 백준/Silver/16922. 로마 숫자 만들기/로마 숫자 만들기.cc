#include<bits/stdc++.h>
using namespace std;
int n,ans;
int input[4]={1,5,10,50};
bool visited[1001];
  
void dfs(int idx, int sum, int cnt){
    if(cnt==n){
        if(visited[sum])return;
        visited[sum] = 1;
        ans++;
        return;
    }
    for(int i=idx;i<4;i++){
        dfs(i,sum+input[i],cnt+1);
    }
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >>n;
    dfs(0,0,0);
    cout << ans;
    return 0;
}