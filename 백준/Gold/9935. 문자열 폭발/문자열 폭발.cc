#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	string str, boom, ans="";
	cin >> str >> boom;
	
	for (int i = 0; i < str.size(); i++) {
		ans += str[i];
		if (ans.size() >= boom.size() && ans[ans.size()-1]==boom[boom.size()-1]) {
			string temp = ans.substr(ans.size() - boom.size(), ans.size());
			if (temp == boom) {
				for (int j = 0; j < boom.size(); j++) {
					ans.pop_back();
				}
			}
		}
	}
	if (ans.size() == 0)cout << "FRULA";
	else cout << ans;
	return 0;
}