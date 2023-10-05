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
	int z_c = zero / 2; int o_c = one / 2;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1' && cnt <o_c) {
			cnt++;
			continue;
		}
		result += s[i];
	}
	int cnt1 = 0;
	string result1 = "";
	for (int i = 0; i <result.size(); i++) {
		if (result[i] == '0' && cnt1 >= z_c)
			continue;
		if (result[i] == '0') {
			cnt1++;
		}
		result1 += result[i];
	}

	cout << result1 << "\n";

	return 0;
}