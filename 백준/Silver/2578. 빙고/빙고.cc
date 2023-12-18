#include<iostream>
using namespace std;
int arr[26][26];
int result[26][26];
int key, cnt, ans;
bool re;
bool r[5], c[5], d[2];

void row() {
	for (int i = 0; i < 5; i++) {
		int a = 0;
		if (r[i] == 1) continue;
		for (int j = 0; j < 5; j++) {
			if (result[j][i] == 1) a++;
		}
		if (a == 5) {
			cnt++;
			r[i] = 1;
		}
	}
	return;
}
void column() {
	for (int i = 0; i < 5; i++) {
		int a = 0;
		if (c[i] == 1) continue;
		for (int j = 0; j < 5; j++) {
			if (result[i][j] == 1) a++;
		}
		if (a == 5) {
			cnt++;
			c[i] = 1;
		}
	}
	return;
}
void diagonal() {
	if (d[0]==0 && result[0][0] == 1 && result[1][1] == 1 && result[2][2] == 1 && result[3][3] == 1 && result[4][4] == 1) {
		cnt++;
		d[0] = 1;
	}
	if (d[1] == 0 && result[0][4] == 1 && result[1][3] == 1 && result[2][2] == 1 && result[3][1] == 1 && result[4][0] == 1) {
		cnt++;
		d[1] = 1;
	}
	return;
}
void solve() {
	row();
	column();
	diagonal();
	return;
}

void input() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}
	for (int k = 0; k < 25; k++) {
		bool b = 0;
		cin >> key;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (arr[i][j] == key) {
					result[i][j] = 1;
					b = 1;
					break;
				}	
			}
			if (b == 1) break;
		}
				
			
		solve();

		if (re==0 && cnt >= 3) {
			ans = k + 1;				
			re=1;
		}
		
	}
	return;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	input();

	cout << ans << "\n";

	return 0;
}