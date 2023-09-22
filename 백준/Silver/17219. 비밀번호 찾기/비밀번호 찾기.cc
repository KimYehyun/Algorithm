#include<iostream>
#include<map>
using namespace std;

int main(void) {

	int n, m;
	map<string, string>ma;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string url, pwd;
		cin >> url >> pwd;
		ma.insert({ url,pwd });
	}

	for (int i = 0; i < m; i++) {
		string url;
		cin >> url;
		cout << ma[url] << "\n";
	}

	return 0;
}