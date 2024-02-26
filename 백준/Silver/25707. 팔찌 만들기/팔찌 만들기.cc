#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[1001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<>());
    
    long long sum=0;  
    for(int i=0;i<n;i++){
        if(i==n-1)
            sum += arr[0]-arr[i];
        else
            sum += arr[i]-arr[i+1];
        
    }
    cout << sum;
    return 0;
}