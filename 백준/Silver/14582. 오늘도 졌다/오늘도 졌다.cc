#include<iostream>
using namespace std;

int arr1[10];
int arr2[10];
bool win = false;
int sum1 = 0, sum2 = 0;
int main(void) {

	for (int i = 0; i < 9; i++)
		scanf("%d", &arr1[i]);
	for (int i = 0; i < 9; i++)
		scanf("%d", &arr2[i]);

	
	for (int i = 0; i < 9; i++) {
		sum1 += arr1[i];
		if (sum1 > sum2) win = true;
		sum2 += arr2[i];
	}
	
	if (win == 1)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}