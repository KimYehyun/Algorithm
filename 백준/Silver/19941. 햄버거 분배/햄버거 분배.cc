#include<iostream>
#include<string>
using namespace std;
int n, k;
string str;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> k >> str;

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		if (str[i] != 'P') continue;
		for (int j = i - k; j <= i + k; j++) {
			if (j >= 0 && j < n && str[j] == 'H') {
				str[j] = 'E';
				cnt++;
				break;
			}
		}
			
	}
	
	cout << cnt << "\n";

	return 0;
}