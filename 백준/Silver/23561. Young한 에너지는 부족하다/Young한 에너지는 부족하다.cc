#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int arr[300001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i=0;i<3*n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+3*n);
    cout << arr[2*n-1] - arr[n];

    return 0;
}