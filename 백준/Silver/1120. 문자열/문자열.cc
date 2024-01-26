#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string str1, str2;
	cin >> str1 >> str2;
 int min_v = 2134567890;
	if (str1.size() == str2.size()) {
		int cnt = 0;
		for (int i = 0; i < str1.size(); i++) {
			if (str1[i] != str2[i]) cnt++;
		}
		cout << cnt << "\n";
	}
	else {	
		for (int i = 0; i <= str2.size() - str1.size(); i++) {
			string str3 = str2.substr(i, str1.size());
			int cnt = 0;
			for (int i = 0; i < str1.size(); i++) {
				if (str1[i] != str3[i]) cnt++;
			}
			min_v = min(min_v, cnt);
		}
		cout << min_v<<"\n";
	}

	return 0;
}