#include <string>
#include <vector>
#include <queue>
using namespace std;
vector<int>graph[20001];
int dist[20001];

void dijkstra(){
    priority_queue<pair<int,int>>pq;
    pq.push({0,1});
    dist[1]=0;
    
    while(!pq.empty()){
        int cost = -pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        if(dist[cur]<cost) continue;
        for(int i=0;i<graph[cur].size();i++){
            int n_cost = cost+1;
            int n_cur = graph[cur][i];
            if(n_cost < dist[n_cur]){
                dist[n_cur]=n_cost;
                pq.push({-n_cost,n_cur});
            }
        }
    }
    
}

int solution(int n, vector<vector<int>> edge) {
    int answer = 1;
    for(int i=0;i<edge.size();i++){
        graph[edge[i][0]].push_back(edge[i][1]);
        graph[edge[i][1]].push_back(edge[i][0]);
    }

    for(int i=1;i<=n;i++){
        dist[i]=2134567890;
    }
    dijkstra();
    
    int max_v = 0;
    for(int i=1;i<=n;i++){
        if(max_v<dist[i]){
            max_v = dist[i];
            answer =1;
        }
        else if(max_v==dist[i]){
            answer++;
        }
    }
    
    return answer;
}