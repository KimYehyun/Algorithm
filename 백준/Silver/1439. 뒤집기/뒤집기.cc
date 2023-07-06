#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {

	string s;
	cin >> s;
	char a=s[0];
	int cnt_a = 0;
	int	cnt_b = 1;
	bool ch = 0;
	int len = s.length();
	for (int i = 0; i < len; i++) {
		if (a != s[i]) {
			a = s[i];
			if (ch == 0) {
				cnt_a++;
				ch = 1;
			}
			else {
				cnt_b++;
				ch = 0;
			}	
		}		
	}

	int m = min(cnt_a, cnt_b);
	printf("%d",m);
	return 0;
}