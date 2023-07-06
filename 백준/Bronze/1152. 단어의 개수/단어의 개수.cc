#include<iostream>
#include<string>
using namespace std;

int main(void) {

	string str;
	getline(cin, str);
	int cnt = 0;
	int n = str.size();
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
			cnt++;
		}
		i++;
	}
	printf("%d", cnt);

	return 0;
}