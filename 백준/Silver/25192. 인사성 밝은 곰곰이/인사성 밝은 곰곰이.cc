#include<iostream>
#include<set>
using namespace std;
int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
	int n, cnt = 0; string str; 
	set<string>s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "ENTER") {
			cnt += s.size();
			s.clear();
			continue;
		}
		s.insert(str);
	}
	cnt += s.size();
	cout << cnt << "\n";

	return 0;
}