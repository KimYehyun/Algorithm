#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[31][31];
int n,k,sum;
void input(){
    cin >> n >> k;
}
void solve(){
     
    for (int i = 0; i < n; i++) arr[i][0] = 1;
    for(int i=1;i<n;i++) {
        for(int j=1;j<=i;j++) {
            arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
        }
    } 
    cout << arr[n-1][k-1];    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    input();
    solve();
    return 0;
}