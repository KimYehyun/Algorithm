#include<iostream>
using namespace std;
int main(void) {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
		else str[i] -= 32;
	}
	cout << str << "\n";
	
	return 0;
}