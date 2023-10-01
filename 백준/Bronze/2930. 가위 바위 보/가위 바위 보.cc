#include<iostream>
#include<cmath>
using namespace std;

int check(char a, char fr) {
	if (a == 'R') {
		if (fr == 'S') return 2;
		else if (fr == 'R') return 1;
		else return 0;
	}
	else if (a == 'S') {
		if (fr == 'P') return 2;
		else if (fr == 'S') return 1;
		else return 0;
	}
	else if (a == 'P') {
		if (fr == 'R') return 2;
		else if (fr == 'P') return 1;
		return 0;
	}
}

int main(void) {

	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, f; string sg; string friends[51];
	cin >> n >> sg >> f;
	for (int i = 0; i < f; i++) {
		cin >> friends[i];
	}

	int sum = 0, max_sum = 0;
	for (int j = 0; j < n; j++) {
		int r = 0, s = 0, p = 0;
		for (int i = 0; i < f; i++) {
			sum += check(sg[j], friends[i][j]);	
			r += check('R', friends[i][j]);
			s += check('S', friends[i][j]);
			p += check('P', friends[i][j]);
		}
		max_sum += max(r, max(s, p));
	}

	cout << sum << "\n"<<max_sum<<"\n";
	return 0;
}