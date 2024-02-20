#include <bits/stdc++.h>
using namespace std;
int n;
double arr[100001];
double max_v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    max_v = arr[n-1];
    for(int i=0;i<n-1;i++){
        max_v += (arr[i]/2);
    }
    cout << max_v;
    return 0;
}