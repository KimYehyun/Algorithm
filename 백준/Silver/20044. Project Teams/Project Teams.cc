#include <bits/stdc++.h>
using namespace std;
int arr[10001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n*2;i++){
        cin >> arr[i];
    }
    sort(arr,arr+2*n);
    int ans = 2134567890;
    for(int i=0;i<n;i++){
        ans = min(ans,arr[i]+arr[(n*2)-i-1]);
    }
    cout << ans;
    return 0;
}