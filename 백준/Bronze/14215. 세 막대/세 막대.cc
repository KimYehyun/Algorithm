#include <bits/stdc++.h>
using namespace std;
int arr[3];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    if(arr[0] + arr[1] > arr[2]) cout << arr[0] + arr[1] + arr[2];
    else cout << (arr[0] + arr[1]) * 2 - 1;
    return 0;
}