#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	set<string> s{ "ChongChong" };
	int n;
	cin >> n;

	while (n--) {
		string a, b;
		cin >> a >> b;
		if (s.find(a) != s.end() || s.find(b) != s.end()) {
			s.insert(b);
			s.insert(a);
		}
	}
	cout << s.size();
}