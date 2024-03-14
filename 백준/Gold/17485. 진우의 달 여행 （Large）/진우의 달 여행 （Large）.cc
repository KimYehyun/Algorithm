#include<bits/stdc++.h>
using namespace std;
 
int cost[1001][1001];
int dp[1001][1001][4];
int n, m;
 
int solve(int x, int y, int dir)
{
    if(x == n)
    {
        return 0;
    }
    
    if(dp[x][y][dir] != 2134567890)
    {
        return dp[x][y][dir];
    }
    
    // 왼
    if(dir != 0 && y-1 >= 0)
    {
        dp[x][y][dir] = solve(x+1, y-1, 0) + cost[x][y];     
    } 
    
    // 중 
    if(dir != 1)
    {
        dp[x][y][dir] = min(dp[x][y][dir], solve(x+1, y, 1) + cost[x][y]);    
    }
    
    // 오
    if(dir != 2 && y+1 < m)
    {
        dp[x][y][dir] = min(dp[x][y][dir], solve(x+1, y+1, 2) + cost[x][y]); 
    } 
    
    return dp[x][y][dir];
}
 
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> cost[i][j];
            
            for(int k = 0; k < 4; k++)
            {
                dp[i][j][k] = 2134567890;    
            }
        }
    }
     
    int ans = 2134567890;
    for(int i = 0; i < m; i++)
    {
        ans = min(ans, solve(0, i, 3));
    }
    
    cout << ans;
    
    return 0;
}
