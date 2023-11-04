#include<iostream>
using namespace std;
int arr[11];
bool visit[11];
int n;
int arr1[11];

void dfs(int cnt) {
	if (cnt == n+1) {
		int result[11];
		for (int i = 1; i <= n; i++) {
			int c = 0;
			for (int j = 1; j < i; j++) {
				if (arr[i] < arr[j]) c++;
			}
			result[arr[i]] = c;
		}
		bool b=0;
		for (int i = 1; i <= n; i++)
			if (arr1[i] != result[i]) b = 1;
		
		if (b == 0) {
			for (int i = 1; i <= n; i++) {
				cout << arr[i] << " ";
			}
		}

		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			arr[cnt] = i;
			dfs(cnt + 1);
			visit[i] = 0;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		arr1[i] = a;
	}
	dfs(1);
	return 0;
}