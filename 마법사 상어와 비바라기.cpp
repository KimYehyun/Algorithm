#include<iostream>
#include<vector>
using namespace std;
int n, m, answer;
int A[51][51];
vector<pair<int, int>>cloud;
bool cloud_visit[51][51];

int dx[9] = { 0, 0, -1, -1, -1, 0, 1, 1, 1 };
int dy[9] = { 0, -1, -1, 0, 1, 1, 1, 0, -1 }; 

void move_cloud(int d, int s) {

	for (int i = 0; i < cloud.size(); i++) {
		int nx = cloud[i].first + dx[d] * s;
		int ny = cloud[i].second + dy[d] * s;
		while (nx <= 0) {
			nx += n;
		}
		while (nx > n) {
			nx -= n;
		}
		while (ny <= 0) {
			ny += n;
		}
		while (ny > n) {
			ny -= n;
		}
		cloud[i].first = nx;
		cloud[i].second = ny;

		A[cloud[i].first][cloud[i].second]++;
		cloud_visit[cloud[i].first][cloud[i].second] = true;
	}

	return;
}

void water_copy() {
	int water = 0;
	for (int i = 0; i < cloud.size(); i++) {
		for (int j = 2; j <= 8; j+=2) {
			int x = cloud[i].first + dx[j];
			int y = cloud[i].second + dy[j];
			if ((x >= 1 || x <= n || y >= 1 || y <= n) && A[x][y]!=0)
				water++;
		}
		A[cloud[i].first][cloud[i].second] += water;
		water = 0;
	}
	return;
}

void make_cloud() {
	cloud.clear();
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (A[i][j] >= 2 && !cloud_visit[i][j]) {
				cloud.push_back(make_pair(i, j));
				A[i][j] -= 2;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cloud_visit[i][j] = false;
		}
	}
	return;
}

int sum_water() {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			sum += A[i][j];
	}
	return sum;
}

 int main(void) {
	
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	cloud.push_back(make_pair(n, 1));
	cloud.push_back(make_pair(n, 2));
	cloud.push_back(make_pair(n - 1, 1));
	cloud.push_back(make_pair(n - 1, 2));

	for (int i = 1; i <= m; i++) {
		int d, s;
		scanf("%d %d", &d, &s);
		move_cloud(d,s);
		water_copy();
		make_cloud();	
	}

	printf("%d", sum_water());
	return 0;
}