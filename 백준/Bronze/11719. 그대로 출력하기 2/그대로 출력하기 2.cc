#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string str;
	while (getline(cin, str)) {
		cout << str << "\n";
	}
	return 0;
}