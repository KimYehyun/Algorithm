#include<iostream>
#include<queue>
using namespace std;
int n, k;
bool visit[100001];
void bfs() {
	priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
	q.push({ 0,n });

	while (!q.empty()) {
		int cur = q.top().second;
		int time = q.top().first;
		q.pop();

		visit[cur] = 1;

		if (cur == k) {
			cout << time << "\n";
			break;
		}	
		if(cur-1>=0 && !visit[cur -1])
			q.push({ time + 1,cur - 1 });
		if(cur+1<=100000 && !visit[cur+1])
			q.push({ time + 1, cur + 1 });	
		if(cur*2 <=100000 && !visit[cur*2])
			q.push({ time, cur * 2 });		
	}
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> k;
	bfs();
	return 0;
}