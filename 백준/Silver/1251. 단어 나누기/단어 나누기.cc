#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
string str,ans;
int len;

void divide(string str_1, int s, int e) {
	string s1="", s2="", s3="";
	for (int i = 0; i <= s; i++) s1 = s1 + str_1[i];
	for (int i = s+1; i <= e; i++) s2 = s2 + str_1[i];
	for (int i = e+1; i < len; i++) s3 = s3 + str_1[i];

	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	reverse(s3.begin(), s3.end());

	string result = s1 + s2 + s3;
	if (ans == "") ans = result;
	if (ans > result) ans = result;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> str;
	len = str.size();
	for (int i = 0; i < len-1; i++) {
		for (int j = i; j < len - 1; j++) {
			if (i >= j) continue;
			string str1 = str;
			divide(str1, i, j);
		}
	}
	cout << ans;
	return 0;
}