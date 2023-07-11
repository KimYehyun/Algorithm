#include<iostream>
using namespace std;

int main(void) {

	string str;
	cin >> str;
	int i = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			cout << str[i];
	}
	return 0;
}