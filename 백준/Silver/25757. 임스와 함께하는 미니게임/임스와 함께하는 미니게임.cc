#include<iostream>
#include<set>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	string str, game;
	set<string>s;
	cin >> n >> game;
	for (int i = 0; i < n; i++) {
		cin >> str;
		s.insert(str);
	}
	if (game == "Y")
		cout << s.size();
	else if (game == "F")
		cout << s.size() / 2;
	else
		cout << s.size() / 3;

	return 0;
}