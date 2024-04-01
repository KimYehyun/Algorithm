#include <iostream>
using namespace std;

int N;
long long arr[100000];
long long answer;
long long result[100000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> arr[i];
	}
    
	result[0] = arr[0];

	for (int i = 1; i < N; ++i) {
		result[i] = result[i - 1] + arr[i];
	}

	for (int i = 0; i < N - 1; ++i) {
		answer += arr[i] * (result[N - 1] - result[i]);
	}

	cout << answer;
    return 0;

}