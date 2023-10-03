#include <iostream>
#include <iomanip>
using namespace std;

int n, m, q;
int arr[1000][1000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n >> m >> q;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            arr[i][j] += arr[i][j - 1];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] += arr[i - 1][j];
        }
    }

    for (int i = 0; i < q; i++) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        long long sum = 0, cnt = 0;
        sum = arr[r2 - 1][c2 - 1] - arr[r1 - 2][c2 - 1] - arr[r2 - 1][c1 - 2] + arr[r1 - 2][c1 - 2];
        cnt = (r2 - r1 + 1) * (c2 - c1 + 1);
        cout << sum/ cnt << "\n";
    }

    return 0;
}
