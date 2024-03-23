#include <bits/stdc++.h>
using namespace std;
int n,m;
int parent[10001];
long long result;

int getParent(int num) {
	if (num == parent[num]) return num;
	return parent[num] = getParent(parent[num]);

}
bool findParent(int a, int b) {
	a = getParent(a);
	b = getParent(b);
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}
void unionParent(int a, int b) {
	a = getParent(a);
	b = getParent(b);

	if (a != b) {
		parent[a]= b;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    vector<pair<int,pair<int,int>>> v(m);
    for(int i=0;i<m;i++){
        int a,b,c;
        cin >> a >> b >> c;
        v[i] = {c,{a,b}};
    }
    for (int i = 1; i <= n; i++) {
		parent[i] = i;
	}
	sort(v.begin(), v.end());
    for (int i = 0; i < m; i++) {
		int cost = v[i].first;
		int a = v[i].second.first;
		int b = v[i].second.second;
		if (!findParent(a, b)) {
			result += cost;
			unionParent(a, b);
		}
	}
	cout << result;
    return 0;
}