#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {
	string c[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	string str;
	cin >> str;
	int cnt = 0;
	while (str.size() != 0) {
		string s1, s2;
		s1 = str.substr(0, 2);
		s2 = str.substr(0, 3);
		auto it = find(c, c + 8, s1);
		auto it2 = find(c, c + 8, s2);
		if (it != c + 8) {
			str = str.substr(2, str.size());
			cnt++;
		}
		else if (it2 != c + 8) {
			str = str.substr(3,str.size());
			cnt++;
		}
		else {
			str = str.substr(1, str.size());
			cnt++;
		}	
	}

	cout << cnt << "\n";

	return 0;
}