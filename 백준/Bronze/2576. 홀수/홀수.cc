#include<iostream>
using namespace std;

int main(void) {

	int sum = 0;
	int min = 100;
	for (int i = 0; i < 7; i++) {
		int a;
		scanf("%d", &a);
		if (a % 2 == 1) {
			sum += a;
			if (min > a)
				min = a;
		}
				
	}

	if (sum == 0)
		printf("%d", -1);
	else
		printf("%d\n%d\n", sum, min);


	return 0;
}