#include<iostream>
using namespace std;


int main(void) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			char a;
			cin >> a;
			if (i % 2 == 0 && j % 2 == 0 && a == 'F')
				cnt++;
			else if (i % 2 == 1 && j % 2 == 1 && a == 'F')
				cnt++;
		}
	}

	cout << cnt << "\n";
	return 0;
}