#include<iostream>
#include<string>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string str;
	cin >> str;
	if (str.size() == 2) {
		int k = stoi(str);
		int a = k / 10;
		int b = k % 10;
		cout << a + b;
	}
	else if(str.size() == 3){
		if (str[1] == '0') {
			cout << 10 + (str[2] - '0');
		}
		else if (str[2] == '0') {
			cout << 10 + (str[0] - '0');
		}
	}
	else {
		cout << 20;
	}

	return 0;
}