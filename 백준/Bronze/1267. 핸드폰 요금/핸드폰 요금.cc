#include<iostream>
using namespace std;

int main(void) {

	int n = 0;
	int y = 0;
	int m = 0;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		if (a >= 30) {
			 y += ((a / 30) + 1) * 10;
			 m += ((a / 60) + 1) * 15;
		}
		else {
			y += 10;
			m += 15;
		}
		
	}


	if (y < m)
		printf("Y %d", y);
	else if (y > m)
		printf("M %d", m);
	else
		printf("Y M %d", y);

	return 0;
}