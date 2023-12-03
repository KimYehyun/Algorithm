#include <iostream>


using namespace std;

int arr1[101][101];
int arr2[101][101];
int result[101][101];
int N, M, K;

void input(){
    cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin>>arr1[i][j];
		}
	}
	cin >> M >> K;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < K; j++) {
			cin >> arr2[i][j];
		}
	}
}

void solve(){
    for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			for (int k = 0; k < M; k++) {
				result[i][j] += arr1[i][k] * arr2[k][j];
			}
			cout << result[i][j] << " ";
		}
		cout << "\n";
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
	input();
    solve();
    
    return 0;
}