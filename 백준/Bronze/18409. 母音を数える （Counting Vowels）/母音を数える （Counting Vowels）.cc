#include<iostream>
using namespace std;

int main(void) {

	int n;
	int cnt=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char a;
		scanf(" %c", &a);
		if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}