#include<iostream>
#include<map>
#include<string>
using namespace std;
map<string, string>m1;
int n, m;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		string str;
		cin >> str;
		m1.insert({ to_string(i),str });
		m1.insert({ str,to_string(i) });
	}

	for (int i = 0; i < m; i++) {
		string r;
		cin >> r;
		cout << m1[r] << "\n";
	}

	return 0;
}