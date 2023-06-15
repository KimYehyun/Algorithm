#include<iostream>
#include<algorithm>
using namespace std;

int n, m;
int ans = 2e9 + 1;
int arr[100001];

int main() {
   
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, arr + n);

    int left = 0, right = 1;
    while (left < n) {
        if (arr[right] - arr[left] < m) {
            right++;
            continue;
        }
        if (arr[right] - arr[left] == m) {
            cout << m;
            return 0;
        }
        ans = min(ans, arr[right] - arr[left]);
        left++;
    }

    cout << ans;
    return 0;
}