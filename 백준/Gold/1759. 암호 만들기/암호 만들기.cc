#include<iostream>
#include<algorithm>
using namespace std;
int n, m;
char input[20];
char arr[20];
bool visit[20];

bool check() {
	int a=0, b=0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') a++;
		else b++;
	}
	if (a >= 1 && b >= 2) return true;
	else return false;
}

void dfs(int num, int cnt) {
	if (cnt == n) {
		bool c = check();
		if (c == true) {
			for (int i = 0; i < cnt; i++) {
				cout << arr[i];
			}cout << "\n";
		}
		return;
	}
	for (int i = num; i < m; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			arr[cnt] = input[i];
			dfs(i+1,cnt + 1);
			visit[i] = 0;
		}
	}
}
int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> input[i];
	}
	sort(input, input + m);
	dfs(0,0);
	return 0;
}