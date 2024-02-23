#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;
int arr[1001][3];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++){
       cin >> arr[i][0] >> arr[i][1]>>arr[i][2];
        arr[i][0] +=min(arr[i-1][1],arr[i-1][2]);
        arr[i][1] +=min(arr[i-1][0],arr[i-1][2]);
        arr[i][2] +=min(arr[i-1][0],arr[i-1][1]);
    }
    cout << min({arr[n][0],arr[n][1],arr[n][2]});

    return 0;
}