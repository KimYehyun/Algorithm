#include<iostream>
using namespace std;

int main(void) {
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		int s = str.size();
		if (s >= 6 && s <= 9) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
	return 0;
}