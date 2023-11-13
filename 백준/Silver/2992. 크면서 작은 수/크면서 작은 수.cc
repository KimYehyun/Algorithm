#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
char input[10];
char arr[10];
bool visit[10];
int s, j;
vector<int>v;
void dfs(int cnt) {
	if (cnt == s) {
		string str;
		for (int i = 0; i < s; i++)
			str += arr[i];
		v.push_back(stoi(str));
		return;
	}
	for (int i = 0; i < s; i++) {
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
	string r;
	int k = 0;
	cin >> r;
	s = r.size();
	for (int i = 0; i < s; i++)
		input[i] = r[i];
	k = stoi(r);
	dfs(0);
	sort(v.begin(), v.end());
	auto ans = upper_bound(v.begin(),v.end(), k) - v.begin();
	if (ans == v.size()) cout << "0" << "\n";
	else cout << v[ans] << "\n";

	return 0;
}