#include<iostream>
using namespace std;

int CCW(int x1, int y1, int x2, int y2, int x3, int y3) {
	return ((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
}
int main(void)
{
	int arr[3][2];
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}
	int result = CCW(arr[0][0], arr[0][1], arr[1][0], arr[1][1], arr[2][0], arr[2][1]);

	if (result < 0)
		printf("%d", -1);
	else if (result == 0)
		printf("%d", 0);
	else
		printf("%d", 1);
	return 0;
}