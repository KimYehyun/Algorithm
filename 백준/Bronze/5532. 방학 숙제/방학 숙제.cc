#include<iostream>
using namespace std;
int main(void) {
	int L, A, B, C, D;
	cin >> L >> A >> B >> C >> D;

	int a, b;
	if (A % C == 0)
		a = A / C;
	else
		a = A / C + 1;
	if (B % D== 0)
		b = B / D;
	else
		b = B / D + 1;

	if (a > b)
		cout << L - a;
	else
		cout << L - b;
	

	return 0;
}