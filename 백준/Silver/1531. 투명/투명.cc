#include <iostream>
using namespace std;
int n, m;
int arr[101][101];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1; x <= x2; x++) {
            for (int y = y1; y <= y2; y++) {
                arr[x][y] ++;
            }
        }
    }

    int cnt = 0;
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            if (arr[i][j] > m) cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}