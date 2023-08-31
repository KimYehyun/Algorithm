#include<iostream>
#include<stack>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		stack<char>st;
		string s;
		bool a = 0;
		cin >> s;
		int len = s.size();
		for (int i = 0; i < len; i++){
			if (s[i] == '(')
				st.push('(');
			else {
				if (st.empty()) {
					cout << "NO" << "\n";
					a = 1;
					break;
				}			
				else
					st.pop();
			}
		}
		if (a==0 && st.empty()) {
			cout << "YES" << "\n";
		}		
		else if(a==0)
			cout << "NO" << "\n";
	}
	

	return 0;
}