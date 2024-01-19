#include<iostream>
#include<queue>
using namespace std;
int arr[6][6];
int s, e;
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
bool ans;
bool visit[6][6];
void dfs(int x, int y, int m , int a) {

	if (m <= 3 && a>=2) {		
		ans = 1;
		return;
	}
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5 && visit[nx][ny]==0 && arr[nx][ny]!=-1) {
			visit[nx][ny] = 1;
			if (arr[nx][ny] == 1) {
				dfs(nx, ny, m + 1, a + 1);
			}
			else {
				dfs(nx, ny, m + 1, a);
			}
			visit[nx][ny] = 0;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}
	cin >> s >> e;
	int a = 0;
	if (arr[s][e] == 1) a++;
	visit[s][e] = 1;
	dfs(s, e, 0, a);
	
	cout << ans << "\n";
	

	return 0;
}