#include<iostream>
#include<cmath>
using namespace std;
int arr[1001];

bool isPrime(int number) {
	if (number == 0 || number == 1) return -1;
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) return -1;
	}
	return 1;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int N,K;
	cin >> N >> K;
	int cnt = 0;
	for (int i = 2; i <= N; i++) {
		if (arr[i] == 0 && isPrime(arr[i]) == true) {
			for (int j = i ; j <= N; j++) {
				if (j % i == 0 &&arr[j]==0) {
					arr[j] = 1;
					cnt++;
					if (cnt == K) {
						cout << j;
						return 0;
					}
				}
			}
		}

	}

}