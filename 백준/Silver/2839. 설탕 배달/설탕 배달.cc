#include<iostream>
using namespace std;

int main(void) {

	int n;
	cin >> n;
	int result = 0;
	while (n>=0) {
		if (n % 5 == 0) {
			result += n / 5;
			cout << result;
			return 0;
		}
		else {
			n -= 3;
			result++;
		}
	}
	cout << "-1";
	
}