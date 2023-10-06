#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	map<string, int>m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str,key;
		cin >> str;
		int s = str.size();
		for (int i = s-1; i >=0 ; i--) {
			if (str[i] == '.') {
				key = str.substr(i + 1, s);
				m[key]++;
				break;
			}		
		}
	}

	for (auto a : m) 
		cout << a.first << " " << a.second<<"\n";
	return 0;
}