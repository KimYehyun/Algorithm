#include<iostream>
using namespace std;

int main(void) {

	int n;
	string s;
	string s1;
	string s2;
	string ans[1000];
	bool a1, b1;
	scanf("%d", &n);
	cin >> s;
	for (int i = 0; i < n; i++) {
		cin >> ans[i];
	}

	int a = s.find("*");
	s1 = s.substr(0, a);
	s2 = s.substr(a+1, s.size());
	int size2 = s2.size();

	for (int j = 0; j < n; j++) {
		a1 = 1;
		b1 = 1;
		int size1 = ans[j].size();
		for (int i = 0; i < a; i++) {
			if (ans[j][i] == s1[i]) {
				ans[j][i] = '0';
			}
			else {
				a1 = 0;
				break;
			}
		}
		for (int i = 0; i < s2.size(); i++) {

			int pos = ans[j].rfind(s2);
			if (pos == string::npos || pos != ans[j].size() - s2.size()) {
				b1 = 0;
			}

		}

		if (a1 == 1 && b1 == 1)
			printf("DA\n");
		else
			printf("NE\n");
	}

	
	return 0;
}