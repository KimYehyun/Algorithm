#include<iostream>
#include<queue>
#include<vector>

#define MAX 1001
#define INF 987654321
using namespace std;

int V, E, Start, Dest;
int dist[MAX];
vector<pair<int, int>> graph[MAX];

void dijkstra()
{
    priority_queue<pair<int, int>> pq;
    pq.push(make_pair(0, Start));
    dist[Start] = 0;

    while (!pq.empty())
    {
        int cost = -pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        if (dist[cur] < cost) continue;

        for (int i = 0; i < graph[cur].size(); i++)
        {
            int next = graph[cur][i].first;
            int nCost = graph[cur][i].second;

            if (dist[next] > cost + nCost)
            {
                dist[next] = cost + nCost;
                pq.push(make_pair(-dist[next], next));
            }
        }
    }


}


int main(void)
{
    scanf("%d\n%d", &V, &E);
   
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        graph[u].push_back(make_pair(v, w));
    }

    scanf("%d %d", &Start, &Dest);

    for (int i = 1; i <= V; i++)
        dist[i] = INF;

    dijkstra();

    printf("%d", dist[Dest]);

    return 0;
}
