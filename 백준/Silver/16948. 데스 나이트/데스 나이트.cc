#include<iostream>
#include<queue>
using namespace std;
int n, r1, c1, r2, c2;
int dx[6] = { -2,-2,0,0,2,2 };
int dy[6] = { -1,1,-2,2,-1,1 };
bool visit[200][200];
int arr[200][200];
struct node {
    int x1, y1, cnt;
};
int bfs() {
    queue<node> q;
    q.push({r1, c1, 0});
    visit[r1][c1] = 1;

    while (!q.empty()){
        int x = q.front().x1;
        int y = q.front().y1;
        int c = q.front().cnt;
     
        q.pop();

        if (x == r2 && y == c2) return c;

        for (int i = 0; i < 6; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < n && ny < n && visit[nx][ny] == 0){
                visit[nx][ny] = 1;
                q.push({nx,ny,c+1});   
            }
        }
    }
    return -1;
}
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> r1 >> c1 >> r2 >> c2;

	int result = bfs();
    cout << result << "\n";
	return 0;
}