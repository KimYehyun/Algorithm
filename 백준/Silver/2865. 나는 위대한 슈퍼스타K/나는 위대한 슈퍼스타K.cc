#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

float ability[101][101];
int N, M, K, person;
float max_v, sum;
vector<float> abilities;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
   
	cin >> N >> M >> K;

	for (int i = 1; i <= M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> person;
			cin >> ability[person][i];
		}
	}

	for (int i = 1; i <= N; i++) {
		max_v = *max_element(ability[i]+1, ability[i] + M+1);
		abilities.push_back(max_v);
	}

	sort(abilities.begin(), abilities.end(), greater<>());

	for (int i = 0; i < K; i++) {
		sum += abilities[i];
	}

	cout << fixed;
	cout.precision(1);
	cout << sum;
    return 0;
}