#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	string x, y;
    int a,b,sum=0;
	cin >> x >> y;
	reverse(x.begin(),x.end());
	reverse(y.begin(), y.end());
	a = stoi(x);
	b = stoi(y);
	sum = a + b;
	x = to_string(sum);
	reverse(x.begin(), x.end());
	a = stoi(x);
	cout << a << "\n";
	return 0;
}