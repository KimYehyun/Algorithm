#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int map[110][110];
int n, m;
int Min = 2134567890;
int ans;

queue<int> q;
int visit[110];

void init()
{
    for (int i = 1; i <= n; i++)
    {
        visit[i] = 0;
    }
}

void bfs(int start)
{
    visit[start] = 1;
    q.push(start);
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        for (int i = 1; i <= n; i++)
        {
            if (map[cur][i] == 1 && visit[i] == 0)
            {
                visit[i] = visit[cur] + 1;
                q.push(i);
            }
        }
    }
}

int main(void)
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        init();
        bfs(i);
        int sum = 0;
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                sum += (visit[j] - 1);
            }
        }

        if (sum < Min)
        {
            Min = sum;
            ans = i;
        }
    }
    cout << ans;
    return 0;
}
