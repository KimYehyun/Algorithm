#include<iostream>
#include<string>
using namespace std;
int main(void) {
	
	string str, s = "UCPC";
	getline(cin, str);
	int cnt = 0;
	for (int i = 0; i < str.size(); i++)
		if (str[i] == s[cnt]) cnt++;

	if (cnt<4)
		cout << "I hate UCPC" << "\n";
	else
		cout << "I love UCPC" << "\n";

	return 0;
}