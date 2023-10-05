#include<iostream>
using namespace std;
int input[10];
int arr[10];
int n, m, c;
bool visit[10];
void dfs(int cnt) {
	if (cnt == n) {
		int result = 500;
		bool a = 0;
		for (int i = 0; i < n; i++) {
			result -= m;
			result += arr[i];
			if (result < 500) {
				a = 1;
				break;
			}
		}	
		if (a == 0) {
			c++;
			a = 0;
		}
		return;
	}
	
	for (int i = 0; i < n; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			arr[cnt] = input[i];
			dfs(cnt + 1);
			visit[i] = 0;
		}
	}

}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}

	dfs(0);
	cout << c << "\n";

	return 0;
}