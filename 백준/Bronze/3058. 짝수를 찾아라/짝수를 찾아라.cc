#include<iostream>
using namespace std;
int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		int min = 101;
		for (int j = 0; j < 7; j++) {
			int a;
			cin >> a;
			if (a % 2 == 0) {
				sum += a;
				if (min > a)
					min = a;
			}	
		}
		cout << sum << "\n" << min << "\n";
	}
	return 0;
}