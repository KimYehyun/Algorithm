#include<iostream>
#include<vector>
using namespace std;
long long n;
vector<bool>v;
int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;

	int i = 3;
	int result = 0;
	int k = 1;
	while (1) 
	{
		result += i;
		if (result >= n) {
			cout << k;
			break;
		}
		i += 2;
		k++;
	}


	return 0;
}