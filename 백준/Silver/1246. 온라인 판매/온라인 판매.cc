#include <bits/stdc++.h>
using namespace std;
long long arr[1001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long n,m;
    cin >> n >> m;
    for(long long i=0;i<m;i++){
        cin >> arr[i];
    }
    sort(arr,arr+m,greater<>());

    long long max_v = 0;
    long long money=0;
    
    for(long long i=0;i<n;i++){
        if(max_v < arr[i]*(i+1)){
            max_v = arr[i]*(i+1);
            money= arr[i];
        }
    }
    cout << money <<" "<<max_v;
    return 0;
}