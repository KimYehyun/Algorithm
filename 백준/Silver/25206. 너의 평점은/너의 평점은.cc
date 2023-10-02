#include<iostream>
#include<map>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	map<string, double>m;
	m["A+"] = 4.5; m["A0"] = 4.0; m["B+"] = 3.5;
	m["B0"] = 3.0; m["C+"] = 2.5; m["C0"] = 2.0;
	m["D+"] = 1.5; m["D0"] = 1.0; m["F"] = 0.0;

	string s, g; double j, sum1 = 0, sum2 = 0;
	
	cout<<fixed;
	cout.precision(6);

	for (int i = 0; i < 20; i++) {
		cin >> s >> j >> g; 
		if (g == "P") continue;
		sum1 += j;
		sum2 += j * m[g];
	}
	cout << sum2 / sum1 << "\n";

	return 0;
}