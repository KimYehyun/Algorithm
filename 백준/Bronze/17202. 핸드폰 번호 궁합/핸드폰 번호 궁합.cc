#include<iostream>
#include<vector>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	vector<int>v1; 
	vector<int>v2;
	string s1, s2;
	cin >> s1 >> s2;

	for (int i = 0; i < 8; i++) {
		int a = s1[i] - '0';
		int b = s2[i] - '0';
		v1.push_back(a);
		v1.push_back(b);
	}
	
	while (v1.size() > 2) {
		v2 = v1;
		v1.clear();
		for (int i = 1; i < v2.size(); i++) {
			int a = v2[i] + v2[i - 1];
			if (a >= 10)
				a -= 10;
			v1.push_back(a);
		}
	}
	cout << v1[0] << v1[1] << "\n";

	return 0;
}