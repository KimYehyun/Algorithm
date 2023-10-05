#include<iostream>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string s;
	cin >> s;
	int zero = 0;
	int one = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0') zero++;
		else one++;
	}
	string result = "";
	for (int i = 0; i < zero / 2; i++)
		result += '0';
	for (int i = 0; i < one / 2; i++)
		result += '1';
	cout << result << "\n";

	return 0;
}