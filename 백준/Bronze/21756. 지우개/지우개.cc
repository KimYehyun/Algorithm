#include<iostream>

int main(void) {

	int n;
	scanf("%d", &n);
	
	if (n == 1)
		printf("1");
	else if (n < 4)
		printf("2");
	else if (n < 8)
		printf("4");
	else if (n < 16)
		printf("8");
	else if (n < 32)
		printf("16");
	else if (n < 64)
		printf("32");
	else
		printf("64");

	return 0;
}