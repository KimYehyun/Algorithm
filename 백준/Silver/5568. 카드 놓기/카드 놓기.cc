#include<iostream>
#include<set>
using namespace std;
int n, k; 
string arr[11]; 
bool visit[11];
string input[11];
set<string>se;
void dfs(int cnt) {
	
	if (cnt == k) {
		string s = "";
		for (int i = 0; i < k; i++) {
			s += arr[i];
		}	
		se.insert(s);
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
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}
	dfs(0);
	cout << se.size();
	return 0;
}