#include<iostream>
using namespace std;
int main(void) {

	int T;
	int N;
	scanf("%d", &T);

	int arr[11][11]={0};

	for (int c = 1; c <= T; c++) {
		scanf("%d", &N);
		printf("#%d\n", c);
		for (int i = 1; i <= N; i++) {
			arr[i][1] = 1;
			printf("%d ", arr[i][1]);
			for (int j = 2; j <= i; j++) {
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
