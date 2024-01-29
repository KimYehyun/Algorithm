#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int t, x, y, dir, xmax,ymax,xmin,ymin;
string command;

void move(char c, int d) {
	if (c == 'F') {
		if (d == 0) {
			y += 1;
		}
		else if (d == 1) {
			x += 1;
		}
		else if (d == 2) {
			y -= 1;
		}
		else if (d == 3) {
			x -= 1;
		}
	}
	else if (c == 'B') {
		if (d == 0) {
			y -= 1;
		}
		else if (d == 1) {
			x -= 1;
		}
		else if (d == 2) {
			y += 1;
		}
		else if (d == 3) {
			x += 1;
		}
	}
	
	//cout << x << " " << y<<"\n";
	xmax = max(x, xmax);
	xmin = min(x, xmin);
	ymax = max(y, ymax);
	ymin = min(y, ymin);
	return;
}

void solve() {
	x = 0, y = 0, dir = 0;
	xmin=0, ymin =0, xmax = 0, ymax = 0;
	for (int i = 0; i < command.size(); i++) {
		if (command[i] == 'L') {
			if (dir == 0) {
				dir = 3;
			}
			else if (dir == 1) {
				dir = 0;
			}
			else if (dir == 2) {
				dir = 1;
			}
			else {
				dir = 2;
			}
			
		}
		else if (command[i] == 'R') {
			if (dir == 0) {
				dir = 1;
			}
			else if (dir == 1) {
				dir = 2;
			}
			else if (dir == 2) {
				dir = 3;
			}
			else {
				dir = 0;
			}
		}
		else {
			move(command[i],dir);
		}
	}
	return;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> t;
	for (int tc = 0; tc < t; tc++) {
		cin >> command;
		solve();
		//cout << xmin << " "<< xmax <<" " << ymin <<" " << ymax << "\n";
		cout << (abs(xmin)+abs(xmax))* (abs(ymin) + abs(ymax)) << "\n";
		//cout << "\n";
	}

	return 0;
}