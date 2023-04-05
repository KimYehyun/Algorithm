#include<iostream>
#include<queue>

using namespace std;

struct VERTEXT {
	int a;
	int b;
};

int dx[8] = { 1,-1,2,-2,1,-1,2,-2 };
int dy[8] = { 2,2,1,1,-2,-2,-1,-1 };

int n_i, n_j;
int r_i, r_j;
int n;

void bfs() {

	bool check[300][300] = { false };

	queue<pair<VERTEXT, int>> Q;
	Q.push(make_pair(VERTEXT{ n_i,n_j }, 0));

	check[n_i][n_j] = true;
	
	while (!Q.empty()) {

		int temp_x = Q.front().first.a;
		int temp_y = Q.front().first.b;
		int temp_cnt = Q.front().second;

		Q.pop();

		if (temp_x == r_i && temp_y == r_j) {
			printf("%d\n", temp_cnt);
			return;
		}

		for (int i = 0; i < 8; i++) {
			int x = temp_x + dx[i];
			int y = temp_y + dy[i];
		    if(x >= 0 && x < n && y >= 0  && y < n && check[x][y] == false)
			{
				check[x][y] = true;
				Q.push(make_pair(VERTEXT{ x,y }, temp_cnt + 1));
			}
		}

	}

}


int main(void) {

	int k;
	scanf("%d", &k);

	for (int i = 0; i < k; i++) {

		scanf("%d", &n);
		scanf("%d %d", &n_i, &n_j);
		scanf("%d %d", &r_i, &r_j);

		bfs();
		
	}


	return 0;
}