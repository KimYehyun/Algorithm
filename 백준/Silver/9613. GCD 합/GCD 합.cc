#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main() {
    iostream::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin>> t;
    for(int tc=0;tc<t;tc++){
        int n;
        int arr[101];
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        long long sum = 0;
        for(int i = 0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                sum += __gcd(arr[i],arr[j]);
            }
        }

        cout << sum <<"\n";
        
    }
    
    return 0;
}