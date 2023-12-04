#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m, a, b, i;
	vector<pair<int, int>> v;
	cin >> n >> m;
	while (n--) {
		string s;
		cin >> s;
		if (s == "order") {
			cin >> a >> b;
			v.push_back({ b,a });
		}
		else if (s == "sort") {
			sort(v.begin(), v.end());
		}
		else {
			cin >> a;
			for (i = 0; i < v.size(); i++) {
				if (v[i].second == a) {
					v.erase(v.begin() + i);
					break;
				}
			}
		}
		if (v.empty()) {
			cout << "sleep" << endl;
		}
		else {
			for (i = 0; i < v.size(); i++) {
				cout << v[i].second << " ";
			}
			cout << endl;
		}
	}
}
