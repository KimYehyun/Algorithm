#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(void) {

	map<string, double>m;
	int cnt = 0;

	string s;
	while (getline(cin,s)) {
		m[s]++;
		cnt++;
	}

	cout.precision(4);
	cout << fixed;

	for (auto k : m) {
		cout << k.first <<" "<< k.second / cnt * 100 << "\n";
	}

	return 0;

}