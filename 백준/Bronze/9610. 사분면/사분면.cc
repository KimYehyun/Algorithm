#include<iostream>
using namespace std;
int n;
int q[5] = { 0 };
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (a == 0 || b == 0) q[0]++;
		if (a > 0 && b > 0) q[1]++;
		else if (a > 0 && b < 0) q[4]++;
		else if (a < 0 && b>0) q[2]++;
		else if ((a < 0 && b < 0)) q[3]++;
	}
	
	for (int i = 1; i <=4; i++) {
		cout << "Q" << i << ": " << q[i]<<"\n";
	}
	cout << "AXIS: " << q[0];

	return 0;
}