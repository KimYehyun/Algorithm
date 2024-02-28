#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    } 
    sort(arr,arr+n);
    for(int i=0;i<m;i++){
        int a, b, idx1, idx2;
        cin >> a >> b;
        idx1 = lower_bound(arr,arr+n,a)-arr;
        idx2 = upper_bound(arr,arr+n,b)-arr;
        cout << idx2- idx1<<"\n";
    }
    return 0;
}