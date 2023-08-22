#include<iostream>
#include<set>
#include<algorithm>
#include<queue>
#include<string.h>
using namespace std;

int n,mx;
int arr[101][101]; 
set<int>s;
int arr1[101][101];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,-1,0,1 };

void bfs(int i, int j) {
	queue<pair<int, int>>q;
	q.push(make_pair(i, j));
	arr1[i][j] = 1;

	while (!q.empty()) {

		int cur_x = q.front().first;
		int cur_y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int next_x = cur_x + dx[i];
			int next_y = cur_y + dy[i];
			if (next_x >= 0 && next_x < n && next_y >= 0 && next_y < n && arr1[next_x][next_y] == 0) {
				q.push(make_pair(next_x, next_y));
				arr1[next_x][next_y] = 1;
			}
		}

	}
	return;
}


int main(void) {

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			s.insert(arr[i][j]);
		}
	}

	if (s.size() == 1) {
		cout << 1 << "\n";
		return 0;
	}
	

	for (auto iter = s.begin(); iter != s.end(); iter++) {

		for (int i = 0; i < n; i++) 
			memset(arr1[i], 0, sizeof(arr1[i]));

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) 
				if (arr[i][j] <= *iter) arr1[i][j] = 1;

		int cnt = 0;
	
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr1[i][j] == 0) {
					bfs(i,j);
					cnt++;
				}	
			}
		}
		mx = max(mx,cnt);

	}

	cout << mx << "\n";

	return 0;
}