#include<iostream>
#include <unordered_map>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n;
	unordered_map<int, int> um;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (um.find(a) != um.end())
			um[a]++;
		else
			um.insert({ a, 1 });
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		int b;
		cin >> b;
		if (um.find(b) != um.end())
			cout << um[b] <<" ";
		else
			cout << 0 << " ";
	}
	
	return 0;
}