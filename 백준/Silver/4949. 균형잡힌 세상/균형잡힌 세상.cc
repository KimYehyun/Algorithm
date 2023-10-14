#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string str;
	while (getline(cin,str)) {
		stack<char>s1;
		bool a = 0;
		if (str == ".") break;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '[' || str[i] == '(') s1.push(str[i]);
			else if (str[i] == ')') {
				if (!s1.empty() && s1.top() == '(') s1.pop();
				else {
					a = 1;
					break;
				}
			}
			else if (str[i] == ']') {
				if (!s1.empty() && s1.top() == '[')s1.pop();
				else {
					a = 1;
					break;
				}
			}
		}

		if (a == 0 && s1.empty()) cout << "yes" << "\n";
		else cout << "no"<<"\n";
	}


	return 0;
}