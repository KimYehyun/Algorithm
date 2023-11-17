#include<iostream>
#include<algorithm>
using namespace std;
int n;
char arr[51][51];
int dx[2] = { 1,0 };
int dy[2] = { 0,1 };
int max_v;
void checkx(int cur_i, int cur_j) {
	int cnt = 1;
	for (int j = cur_j+1; j < n; j++) {
		if (arr[cur_i][cur_j] == arr[cur_i][j]) cnt++;
		else break;
	}
	max_v = max(max_v, cnt);
}	
void checky(int cur_i, int cur_j) {
	int cnt = 1;
	for (int i = cur_i + 1; i < n; i++) {
		if (arr[cur_i][cur_j] == arr[i][cur_j]) cnt++;
		else break;
	}
	max_v = max(max_v, cnt);
}

void check() {
	
	for (int cur_i = 0; cur_i < n; cur_i++) {
		for (int cur_j = 0; cur_j < n; cur_j++)
		{
			checkx(cur_i, cur_j);
			checky(cur_i, cur_j);
		}
	}

}


int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for(int j=0;j<n;j++)
			cin >> arr[i][j];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < 2; k++) {
				int nx = i + dx[k];
				int ny = j + dy[k];
				if (nx >= n || ny >= n) continue;
				if (arr[i][j] == arr[nx][ny]) continue;
				char tmp = arr[i][j];
				arr[i][j] = arr[nx][ny];
				arr[nx][ny] = tmp;
				check();
				tmp = arr[i][j];
				arr[i][j] = arr[nx][ny];
				arr[nx][ny] = tmp;
			}
		}
	}

	cout << max_v;

	return 0;
}