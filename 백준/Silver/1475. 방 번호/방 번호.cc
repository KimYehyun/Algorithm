#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int num[10];
int main(void) {
	
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		int a = s[i] - 48;
		if (a == 9)
			num[6]++;
		else
			num[a]++;
	}
	
	num[6] = round(double(num[6]) / 2);

	sort(num, num + 10, greater<int>());

	cout << num[0];

	return 0;
}