#include<iostream>
#include<vector>
using namespace std;
int n, m, answer;
int A[51][51];
vector<pair<int, int>>cloud;

int dx[] = { 0,-1,-1,0,1,1,1,0, -1 };
int dy[] = { 0,0,1,1,1,0,-1,-1, -1 };

void move(int d, int s) {
	s = s % n;
	for (int i = 1; i <= cloud.size(); i++)
	{
		cloud[i].first = (cloud[i].first + s * dx[d] + n) % n;
		cloud[i].second = (cloud[i].second + s * dy[d] + n) % n;
		A[cloud[i].first][cloud[i].second]++; 
	}
	return;
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
		move(d,s); //order의 i번째 입력에 따라 구름 이동	
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}


	return 0;
}