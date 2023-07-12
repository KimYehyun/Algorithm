#include<iostream>
using namespace std;

int arr[10000][10000];

int main(void) {

	int n, m;
	int c;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &c);
			for (int k = i*m; k < i*m+m; k++) {
				for (int l = j*m; l <j*m+m; l++) {
					arr[k][l] = c;
				}
			}
		}	
	}

	for (int a = 0; a < n * m; a++) {
		for (int b = 0; b < n * m; b++) {
			printf("%d ", arr[a][b]);
		}
		printf("\n");
	}
	
	return 0;
}