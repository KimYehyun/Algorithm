#include<iostream>
using namespace std;
int arr[25][25];
int cur;
int check[4] = { -2,-1,1,2 }; //가로,세로
int check_x[4] = { -1,-2,1,2 };
int check_y[4] = { 1,2,-1 - 2 };
int ans_x, ans_y;
bool solve(int x, int y) {
	int complete = 0;
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
	//가로
	for (int i = 0; i < 4; i++) {
		int nx = x + check[i];
		int ny = y;
		if (nx >= 1 && nx <= 19 && ny >= 1 && ny <= 19 && arr[nx][ny] == cur) c1++;
	}
	if (c1 == 4) {
		if (x - 3 >= 1 && x - 3 <= 19 && y >= 1 && y <= 19 && arr[x - 3][y] == cur) c1++;
		if (x + 3 >= 1 && x + 3 <= 19 && y >= 1 && y <= 19 && arr[x + 3][y] == cur) c1++;
	}
	if (c1 ==4) {
		ans_x = x-2;
		ans_y = y;
		cout << cur << "\n" << ans_x << " " << ans_y;
		return true;
	}
	
	//세로
	for (int i = 0; i < 4; i++) {
		int nx = x;
		int ny = y + check[i];
		if (nx >= 1 && nx <= 19 && ny >= 1 && ny <= 19 && arr[nx][ny] == cur) c2++;
	}
	if (c2 == 4) {
		if (x >= 1 && x <= 19 && y-3 >= 1 && y-3 <= 19 && arr[x][y-3] == cur) c2++;
		if (x >= 1 && x <= 19 && y+3 >= 1 && y+3 <= 19 && arr[x][y+3] == cur) c2++;
	}
	if (c2 == 4) {
		ans_x = x;
		ans_y = y-2;
		cout << cur << "\n" << ans_x << " " << ans_y;
		return true;
	}

	//우측 위 대각선
	for (int i = 0, k =3; i < 4; i++,k--) {
		int nx = x+check[i];
		int ny = y + check[k];
		if (nx >= 1 && nx <= 19 && ny >= 1 && ny <= 19 && arr[nx][ny] == cur) c3++;
	}
	if (c3 == 4) {
		if (x -3 >= 1 && x-3 <= 19 && y + 3 >= 1 && y + 3 <= 19 && arr[x-3][y + 3] == cur) c3++;
		if (x +3>= 1 && x+3 <= 19 && y - 3 >= 1 && y - 3 <= 19 && arr[x+3][y - 3] == cur) c3++;
	}
	if (c3 == 4) {
		ans_x = x + 2;
		ans_y = y - 2;
		cout << cur << "\n" << ans_x << " " << ans_y;
		return true;
	}

	//우측 아래 대각선
	for (int i = 0; i < 4; i++) {
		int nx = x + check[i];
		int ny = y + check[i];
		if (nx >= 1 && nx <= 19 && ny >= 1 && ny <= 19 && arr[nx][ny] == cur) c4++;
	}
	if (c4 == 4) {
		if (x - 3 >= 1 && x - 3 <= 19 && y - 3 >= 1 && y - 3 <= 19 && arr[x - 3][y - 3] == cur) c4++;
		if (x + 3 >= 1 && x + 3 <= 19 && y + 3 >= 1 && y + 3 <= 19 && arr[x + 3][y + 3] == cur) c4++;
	}
	if (c4 == 4) {
		ans_x = x - 2;
		ans_y = y - 2;
		cout << cur << "\n" << ans_x << " " << ans_y;
		return true;
	}

	return false;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	for (int i = 1; i <= 19; i++) {
		for (int j = 1; j <= 19; j++) {
			cin >> arr[i][j];
		}
	}
	bool flag = 0;

	for (int i = 1; i <= 19; i++) {
		for (int j = 1; j <= 19; j++) {
			if (arr[i][j] != 0) {
				cur = arr[i][j];
				if (solve(i, j)) {
					flag = 1;
					break;
				}
			}

		}
		if (flag == 1) break;
	}

	if (flag == 0) cout << 0;
	return 0;

}