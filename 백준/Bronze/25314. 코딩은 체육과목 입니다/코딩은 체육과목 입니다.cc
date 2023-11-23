#include<iostream>

using namespace std;
int n;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n;
	n /= 4;
	for (int i = 0; i < n; i++) {
		cout << "long ";
	}cout << "int";
	
	return 0;
}