#include<iostream>
using namespace std;
char arr[1001][1001];
int result[1001][1001];
int dx[8] = { 1,-1,0,0,1,1,-1,-1 };
int dy[8] = { 0,0,1,-1,1,-1,1,-1 };

int main(void) {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] != '.') result[i][j]='*';
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < 8; k++) {
				int nx = i + dx[k];
				int ny = j + dy[k];
				if (arr[nx][ny] != '.') {
					continue;
				}
				if (arr[i][j] < '0' || arr[i][j] > '9') {
					continue;
				}
				result[nx][ny] += arr[i][j] - '0';
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] != '.') {
				cout << "*";
				continue;
			}
			if (result[i][j] > 9) {
				cout << "M";
				continue;
			}
			cout << result[i][j];
		}
		cout << "\n";
	}
	return 0;
}