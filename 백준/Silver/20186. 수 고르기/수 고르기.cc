#include <bits/stdc++.h>
using namespace std;
int arr[5001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<>());
    int sum = 0;
    for(int i=0;i<k;i++){
        sum += arr[i];
    }
    sum = sum-(k*(k-1)/2);
    cout << sum;
    return 0;
}