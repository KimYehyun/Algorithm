#include<iostream>
#include<map>
using namespace std;

int main(void) {

	map<string, int>m;
	int sum =0;

	string s;
	string a[7] = { "Re","Pt","Cc","Ea","Tb","Cm","Ex" };

	while (cin >> s){
		m[s]++;
		sum++;
	}

	cout.precision(2);
	cout << fixed;

	for (int i = 0; i < 7; i++) {
		cout << a[i] << " " << m[a[i]] << " " << (double)m[a[i]] / (double)sum << "\n";	
	}
	
	cout << "Total" << " " << sum << " " << "1.00" << "\n";

	return 0;

}