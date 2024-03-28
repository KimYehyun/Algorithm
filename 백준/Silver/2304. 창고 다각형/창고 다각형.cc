#include <bits/stdc++.h>
using namespace std;
int n;
int arr[1001];
int result[1001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        arr[a] = b;
    }
    for(int i=1;i<=1000;i++){
        result[i] = max(arr[i],result[i-1]);
    }
    for(int i=1000;i>=0;i--){
        result[i] = min(result[i],max(arr[i],result[i+1]));
    }
    int ans = 0;
    for(int i=1;i<=1000;i++){
        ans+=result[i];
    }
    cout << ans;
    return 0;
}