#include<iostream>
using namespace std;
int n;
int arr[130][130];
int blue, white;

void solve(int x, int y, int size) {

	bool cut = 0;
	int color = arr[x][y];

	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			if (arr[i][j] != color) {
				cut = 1;
				break;
			}
		}
	}

	if (cut == 1) {
		solve(x, y, size / 2);
		solve(x, y + size / 2, size / 2);
		solve(x + size / 2, y, size / 2);
		solve(x + size / 2, y + size / 2, size / 2);
	}

	else {
		if (color == 1) blue++;
		else white++;
	}


}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	solve(0, 0, n);
	cout << white << "\n";
	cout << blue << "\n";
	return 0;
}