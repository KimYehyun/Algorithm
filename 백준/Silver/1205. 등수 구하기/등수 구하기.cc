#include<iostream>
using namespace std;

int main(void) {
	
	int n;
	int score;
	int p;
	int arr[51];
	
	cin >> n >> score >> p;

	if (n == 0) {
		printf("%d", 1);
		return 0;
	}

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int result = 1;
	int c = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > score)
			result++;
		else if (arr[i] == score)
			result = result;
		else
			break;
		c++;
	}

	if (c == p)
		result = -1;
	
	cout << result << "\n";

	return 0;
}