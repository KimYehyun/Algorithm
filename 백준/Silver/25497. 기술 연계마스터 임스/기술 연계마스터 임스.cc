#include<iostream>
#include<stack>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	stack<char>LR;
	stack<char>SK;
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char a;
		cin >> a;
		if (a == 'L') LR.push(a);
		else if (a == 'R') {
			if (LR.empty())break;
			else {
				LR.pop();
				cnt++;
			}
		}
		else if (a == 'S') SK.push(a);
		else if (a == 'K') {
			if (SK.empty())break;
			else {
				SK.pop();
				cnt++;
			}
		}
		else cnt++;
	}
	cout << cnt << "\n";
	
	return 0;
}


