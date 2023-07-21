#include<iostream>
using namespace std;

bool a[31];

int main(void) {

	int k;
	for (int i = 0; i < 28; i++) {
		scanf("%d", &k);
		a[k] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (a[i] == 0)
			printf("%d\n", i);
	}

	return 0;
}