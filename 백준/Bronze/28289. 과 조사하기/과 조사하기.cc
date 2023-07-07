#include<iostream>
using namespace std;

int main(void) {

	int p;
	int c1 = 0;
	int c2 = 0; 
	int c3 = 0;
	int g1 = 0;

	cin >> p;

	for (int i = 0; i < p; i++) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a == 1)
			g1++;
		else {
			if (b == 3)
				c2++;
			else if (b == 4)
				c3++;
			else
				c1++;

		}

	}
		
	printf("%d\n%d\n%d\n%d\n", c1, c2, c3, g1);

	return 0;
}