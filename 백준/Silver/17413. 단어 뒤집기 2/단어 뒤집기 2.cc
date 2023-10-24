#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string str = "", result = "";
	getline(cin, str);
	str += " ";
	int i = 0;
	bool a = 0;
	while(str.size()!=0){
		if (a == 1) {
			result += str[i];
		}
		if (a==0 && str[i] == '<') {
			if (result.size() != 0) {
				reverse(result.begin(), result.end());
				cout << result;
				str = str.substr(i+1, str.size()-(i+1));
				i = 0;
				result.clear();
				result += '<';
			}
			result += str[i];
			a = 1;
		}
		if (str[i] == '>') {
			a = 0;
			cout << result;
			result.clear();
			str = str.substr(i + 1, str.size() - (i+1));
			i = 0;
		}
		if (a == 0) {
			if (str[i] == ' ') {
				reverse(result.begin(), result.end());
				cout << result<<' ';
				str = str.substr(i+1, str.size()-i);
				i = 0;
				result.clear();
			}
			if (str[i] == '<') continue;
			result += str[i];
		}
		i++;
	}

	return 0;
}