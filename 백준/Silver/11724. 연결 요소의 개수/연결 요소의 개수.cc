#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int chk[1001]; 
vector<int> graph[1001]; 

int res;

void bfs(int n)
{ 
	queue<int>q;
	chk[n] = 1;
	q.push(n);

	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int i = 0; i < graph[cur].size(); ++i) {
			int next = graph[cur][i];
			if (!chk[next]) {
				q.push(next);
				chk[next] = 1;
			}		
		}
	}
	return;
}

int main(void)
{
	int v, e;
	scanf("%d %d", &v, &e);

	for (int i = 0; i < e; ++i)
	{
		int from, to;
		scanf("%d %d", &from, &to);
		graph[from].push_back(to);
		graph[to].push_back(from);
	}
	
	int cnt = 0;
	for (int i = 1; i <= v; i++) {
		if (chk[i] == 0) {
			bfs(i);
			cnt++;
		}
			
	}
	printf("%d", cnt);
	
}