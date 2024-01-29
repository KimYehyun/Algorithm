#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int n;
string str;
char arr[11];
bool visit[11];
int a = 0;
bool ok = 0;
void dfs(int cnt) {
	if (cnt == str.size()) {
		a++;
		if (a == n) {
			cout << str << " " << n << " = ";
			for (int i = 0; i < str.size(); i++) {
				cout <<arr[i];
			}cout << "\n";
			ok = 1;
		}
		return;
		
	}

	for (int i = 0; i < str.size(); i++) {
		if (!visit[i]) {
			visit[i] = 1;
			arr[cnt] = str[i];
			dfs(cnt + 1);
			visit[i] = 0;
		}
	}

}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	while (cin >> str >> n) {
		sort(str.begin(), str.end());
		dfs(0);
		a = 0;
		if (ok == 0) {
			cout << str << " " << n << " = No permutation" << "\n";
		}
		memset(arr, 0, sizeof(arr));
		memset(visit, 0, sizeof(visit));
		ok = 0;
	}

	return 0;
}