#include<iostream>
#include<string>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n,m;
	cin >> n >> m;
	string str,ch;
	ch = to_string(m);
	for (int i = 1; i <= n; i++) {
		str += to_string(i);
	}
	int count = 0;
	for (int i = 0; (i = str.find(ch, i)) != -1; i++) {
		count++;
	}
	cout << count << "\n";
	return 0;
}