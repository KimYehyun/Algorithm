#include<iostream>
#include<set>
using namespace std;
int arr[5][5];
string str = "";
int dx[5] = { 1,-1,0,0 };
int dy[5] = { 0,0,1,-1 };
bool visit[5][5];
set<string>s;

void dfs(int cnt,int x,int y) {
	
	if(cnt == 5) {
		s.insert(str);
		return;
	}
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5) {
			str += arr[nx][ny];
			dfs(cnt + 1, nx, ny);
			str = str.substr(0, str.size() - 1);
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
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			str += arr[i][j];
			dfs(0, i, j);
			str.clear();
		}
	}
	cout << s.size() << "\n";
	return 0;
}