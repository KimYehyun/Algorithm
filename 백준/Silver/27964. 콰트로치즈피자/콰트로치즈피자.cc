#include<iostream>
#include<set>
using namespace std;
int main(void) {

	int n;
	set<string>s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str,str2;
		cin >> str;
		if (str.size() >= 6) {
			str2 = str.substr(str.size() - 6, str.size());
			if (str2 == "Cheese")
				s.insert(str);
		}	
	}
	int len = s.size();
	if (len >= 4)
		cout << "yummy" << "\n";
	else
		cout << "sad";
	

	return 0;
}