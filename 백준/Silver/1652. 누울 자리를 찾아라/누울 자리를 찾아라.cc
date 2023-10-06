#include<iostream>
using namespace std;
char arr[110][110];
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	int a = 0;
	for (int i = 0; i < n; i++) {
		int cnt = 0; bool k = 0;
		for (int j = 0; j < n; j++) {
			if (cnt == 2) {
				a++;
				k = 1;
			}
			if (arr[i][j] == '.') cnt++;
			else {
				cnt = 0;
				k = 0;
			}
		}
		if (k==0 && cnt >= 2) a++;
	}

	int b = 0;
	for (int i = 0; i < n; i++) {
		int cnt = 0; bool k = 0;
		for (int j = 0; j < n; j++) {
			if (cnt == 2) {
				b++;
				k = 1;
			}
			if (arr[j][i] == '.') cnt++;
			else {
				cnt = 0;
				k = 0;
			}
		}
		if (k==0 && cnt >= 2) b++;
	}

	cout << a << " " << b << "\n";

	return 0;
}