#include<iostream>
#include<set>
using namespace std;

int main(void) {

	int n;
	cin >> n;
	string name, state;
	set<string>s;
	for (int i = 0; i < n; i++) {
		cin >> name >> state;
		if (state == "enter")
			s.insert(name);
		else
			s.erase(name);
	}
	for (auto iter = s.rbegin(); iter != s.rend(); iter++)
		cout << *iter << '\n';

	return 0;
}